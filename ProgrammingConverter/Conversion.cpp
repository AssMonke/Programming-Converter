#include "pch.h"
#include "Conversion.h";

bool VerifyInput(unsigned char type, bool isSigned, System::String^ input, System::String^* msg)
{
	input = input->ToUpper();
	if (type != 4) { input = input->Trim(); }
	if (input == "") { *msg = "Empty input."; return false; }
	switch (type) 
	{
	case 0://binary
		for (int i = 0; i < input->Length; i++) 
		{
			if (input[i] != '0' && input[i] != '1')
			{
				*msg = "Invalid binary input.";
				return false;
			}
		}
		return true;
	case 1://hex
		if (input == "-") { *msg = "Invalid hexadecimal input."; return false; }
		for (int i = 0; i < input->Length; i++)
		{
			if ((!isSigned || (i != 0 || input[0] != '-')) && input[i] != '0' && input[i] != '1' && input[i] != '2' && input[i] != '3' && input[i] != '4' && input[i] != '5' && input[i] != '6' && input[i] != '7' && input[i] != '8' && input[i] != '9' && input[i] != 'A' && input[i] != 'B' && input[i] != 'C' && input[i] != 'D' && input[i] != 'E' && input[i] != 'F')
			{
				*msg = "Invalid hexadecimal input.";
				return false;
			}
		}
		return true;
	case 2://dec
		try { isSigned ? System::Convert::ToInt64(input) : System::Convert::ToUInt64(input); }
		catch (const System::OverflowException^) { *msg = "Decimal input has exceeded 64 bit limits."; return false; }
		catch (const System::FormatException^) { *msg = "Invalid decimal input."; return false; }
		return true;
	case 3://float
		try { std::stod(msclr::interop::marshal_as<std::string>(input)); }
		catch (const System::Runtime::InteropServices::SEHException^) { *msg = "Invalid float input."; return false; }
		return true;
	default://string
		return true;
	}
}

unsigned char GetMinimumBits(long long int input)
{
	if (input > -1) 
	{
		if (input <= CHAR_MAX) { return 8; }
		if (input <= SHRT_MAX) { return 16; }
		if (input <= INT_MAX) { return 32; }
		return 64;
	}
	else 
	{
		if (input >= CHAR_MIN) { return 8; }
		if (input >= SHRT_MIN) { return 16; }
		if (input >= INT_MIN) { return 32; }
		return 64;
	}
}

System::String^ ConvertToBinary(unsigned char type, unsigned char bits, System::String^ input)
{
	if (type != 4) { input = input->ToUpper(); }
	switch (type) 
	{
	case 0://binary
		return ConvertToBinary(2, (unsigned int)bits, ConvertToDec(0, input));//return the correct size
	case 1://hex
		if (input[0] == '-') { return ConvertToBinary(2, bits, SConvertToDec(1, input)); }
		return ConvertToBinary(2, (unsigned int)bits, ConvertToDec(1, input));
	case 4: //string
		int l = input->Length;
		System::String^ result = "";
		for (int i = 0; i < l; i++) 
		{ 
			char b;
			wctomb(&b, input[i]);
			System::String^ binChar = ConvertToBinary(2, 8, (long long int)b);
			if (bits != 0 && result->Length+8 > bits) { break; }
			result = result->Insert(result->Length, binChar);
		}
		if (bits == 0) { return result; }
		l = bits - result->Length;
		for (int i = 0; i < l; i++) { result = result->Insert(0, "0"); }
		return result;
	}
}
System::String^ ConvertToBinary(unsigned char type, unsigned int bits, unsigned long long int input)
{
	if (type != 2) { return ""; }//dec
	bits = bits == 0 ? UINT_MAX : bits;
	System::String^ result = "";
	unsigned long long int dec = input;
	while (dec > 1)
	{
		if (result->Length < bits) { result = result->Insert(0, (dec % 2).ToString()); }
		dec = (unsigned long long int)(dec / 2);
	}
	if (result->Length < bits) { result = result->Insert(0, (dec % 2).ToString()); }
	if (bits == UINT_MAX) { return result; }
	int l = bits - result->Length;
	for (int i = 0; i < l; i++) { result = result->Insert(0, "0"); }
	return result;
}
System::String^ ConvertToBinary(unsigned char type, unsigned char bits, long long int input)
{
	if (type != 2) { return ""; }//dec
	if (input > -1) { return ConvertToBinary(2, (unsigned int)bits, (unsigned long long int)input); }//unsigned
	//signed dec; two's complement
	if (input == 0) 
	{
		System::String^ result = "";
		for (int i = 0; i < bits; i++) { result = result->Insert(0, "0"); }
		return result;
	}
	System::String^ result = ConvertToBinary(2, (unsigned int)bits, (unsigned long long int)(abs(input)-1));
	
	array<wchar_t>^ arr = result->ToCharArray();
	int l = result->Length;
	for (int i = 0; i < l; i++) { arr[i] = arr[i] == '0' ? '1' : '0'; }
	result = gcnew System::String(arr);

	bits = bits == 0 ? GetMinimumBits(input) : bits;

	l = bits - result->Length;
	for (int i = 0; i < l; i++) { result = result->Insert(0, "1"); }
	return result;
}
System::String^ ConvertToBinary(unsigned char type, unsigned char bits, double input)
{
	if (type != 3 || (bits != 32 && bits != 64)) { return ""; }//float
	System::String^ signBit = input < 0 ? "1" : "0";
	input = abs(input);
	long long int integer = (long long int)input;
	double fraction = input - integer;
	System::String^ intStr = ConvertToBinary(2, 0, integer);
	System::String^ result = "";
	for (int i = 0; i < ((bits == 32 ? 23 : 52) - (intStr->Length-1)); i++)
	{
		fraction *= 2;
		if (fraction == 1 && integer == 0) { fraction = 0; }
		result = result->Insert(result->Length, ((int)fraction).ToString());
		fraction -= (int)fraction;
	}
	result = (intStr + result);
	long long int biasedExponent = (integer != 0 ? intStr->Length - 1 : -GetFirstInstance('1', result)) + (bits == 32 ? 127 : 1023);
	std::string s = msclr::interop::marshal_as<std::string>(result);
	s = s.substr(1, s.length());
	result = gcnew System::String(s.c_str());

	return signBit + ConvertToBinary(2, (bits == 32 ? 8 : 11), biasedExponent) + result;
}
System::String^ ConvertToHex(unsigned char type, bool isSigned, System::String^ input)
{
	System::Collections::Generic::List<System::String^> binary;
	switch (type) 
	{
	case 0://binary
		if (isSigned) { return ConvertToHex(2, SConvertToDec(0, input)); }//convert binary to dec, then dec to hex
		else { return ConvertToHex(2, ConvertToDec(0, input)); }

	case 1://hex
		return input->ToUpper();
	case 4:
		return ConvertToHex(0, isSigned, ConvertToBinary(4, 0, input));
	}
}
System::String^ ConvertToHex(unsigned char type, unsigned long long int input)
{
	if (type != 2) { return ""; }
	//dec
	System::String^ result = "";
	unsigned long long int dec = input;
	while (dec > 15) 
	{
		result = result->Insert(0, hex16[dec%16].ToString());
		dec = (unsigned long long int)(dec / 16);
	}
	return result->Insert(0, hex16[dec].ToString());
}
System::String^ ConvertToHex(unsigned char type, long long int input)
{
	if (type != 2) { return ""; }
	//signed dec
	System::String^ result = "";
	long long int dec = std::abs(input);
	while (dec > 15)
	{
		result = result->Insert(0, hex16[dec % 16].ToString());
		dec = (long long int)(dec / 16);
	}
	return input < 0 ? (result->Insert(0, hex16[dec].ToString()))->Insert(0,"-") : result->Insert(0, hex16[dec].ToString());
}
System::String^ ConvertToHex(unsigned char type, double input)
{
	if (type != 3) { return ""; }//float
	return ConvertToHex(0, true, ConvertToBinary(3, 64, input));
}
unsigned long long int ConvertToDec(unsigned char type, System::String^ input)
{
	if (type != 4) { input = input->ToUpper(); }
	unsigned long long int result = 0;
	switch (type)
	{
	case 0://binary
		for (int i = 0; i < input->Length; i++) 
		{
			if (input[i] == '1') 
			{
				result += power(2, (input->Length - i)-1);
			}
		}
		return result;
	case 1://hex
		for (int i = 0; i < input->Length; i++) 
		{
			int v = 0;
			for (int k = 0; k < 16; k++) { if (hex16[k] == input[i]) { v = k; break; } }
			
			result += v * power(16, (input->Length - i)-1);
		}
		return result;
	case 2://dec
		bool l;
		return System::Convert::ToUInt64(input);
	case 4:
		return ConvertToDec(0, ConvertToBinary(4, 0, input));
	}
}
long long int SConvertToDec(unsigned char type, System::String^ input)
{
	if (type != 4) { input = input->ToUpper(); }
	long long int result = 0;
	switch (type)
	{
	case 0://binary
		for (int i = 0; i < input->Length; i++)
		{
			if (input[i] == '1')
			{
				result += power(2, (input->Length - i) - 1);
			}
		}
		return result;
	case 1://hex
		for (int i = 0; i < input->Length; i++)
		{
			int v = 0;
			for (int k = 0; k < 16; k++) { if (hex16[k] == input[i]) { v = k; break; } }

			result += v * power(16, (input->Length - i) - 1);
		}
		return input[0] == '-' ? result * -1 : result;
	case 2://dec
		bool l;
		return System::Convert::ToInt64(input);
	case 4:
		return ConvertToDec(0, ConvertToBinary(4, 0, input));
	}
}
long long int SConvertToDec(unsigned char type, unsigned char bits, double input) 
{
	if (type != 3) { return 0; }
	return SConvertToDec(0, ConvertToBinary(3, bits, input));
}
float ConvertToFloat(unsigned char type, bool isSigned, unsigned char roundPlace, System::String^ input) 
{
	switch (type)
	{
	case 0://binary
	{
		if (input->Length != 32) { return 0; }
		std::string strInput = msclr::interop::marshal_as<std::string>(input);
		int biasedExponent = ConvertToDec(0, gcnew System::String(strInput.substr(1, 8).c_str())) - 127;
		std::string strFrac = strInput.substr(9, 32);
		float fraction = 0;
		for (int i = 0; i < 23; i++)
		{
			if (strFrac[i] == '1') { fraction += power(2, (i + 1) * -1); }
		}
		float result = (strInput[0] == '0' ? 1 : -1) * power(2, biasedExponent) * (1 + fraction);
		return roundPlace == 0 ? result : roundf(result * power(10, roundPlace-1)) / power(10, roundPlace-1);
	}
	case 1:
		return ConvertToFloat(0, isSigned, roundPlace, ConvertToBinary(1, 32, input));
	case 2:
		return ConvertToFloat(0, isSigned, roundPlace, ConvertToBinary(1, 32, ConvertToHex(2, isSigned ? System::Convert::ToInt64(input) : System::Convert::ToUInt64(input))));
	case 3:
		return std::stof(msclr::interop::marshal_as<std::string>(input));
	case 4:
		return ConvertToFloat(0, isSigned, roundPlace, ConvertToBinary(4, 0, input));
	}
}
double ConvertToDouble(unsigned char type, bool isSigned, unsigned char roundPlace, System::String^ input)
{
	switch (type)
	{
	case 0://binary
	{
		if (input->Length != 64) { return 0; }
		std::string strInput = msclr::interop::marshal_as<std::string>(input);
		int biasedExponent = ConvertToDec(0, gcnew System::String(strInput.substr(1, 11).c_str())) - 1023;
		std::string strFrac = strInput.substr(12, 64);
		float fraction = 0;
		for (int i = 0; i < 52; i++)
		{
			if (strFrac[i] == '1') { fraction += power(2, (i + 1) * -1); }
		}
		double result = (strInput[0] == '0' ? 1 : -1) * power(2, biasedExponent) * (1 + fraction);
		return roundPlace == 0 ? result : round(result * power(10, roundPlace-1)) / power(10, roundPlace-1);
	}
	case 1:
		return ConvertToDouble(0, isSigned, roundPlace, ConvertToBinary(1, 64, input));
	case 2:
		return ConvertToDouble(0, isSigned, roundPlace, ConvertToBinary(1, 64, ConvertToHex(2, isSigned ? System::Convert::ToInt64(input) : System::Convert::ToUInt64(input))));
	case 3:
		return std::stod(msclr::interop::marshal_as<std::string>(input));
	case 4:
		return ConvertToDouble(0, isSigned, roundPlace, ConvertToBinary(4, 0, input));
	}
}
System::String^ ConvertToString(unsigned char type, bool isSigned, System::String^ input)
{
	switch (type) 
	{
	case 0: 
	{
		int l = input->Length;
		System::String^ result = "";
		System::String^ currentBlock = "";
		for (int i = 1; i <= l; i++)
		{
			currentBlock = currentBlock->Insert(currentBlock->Length, input[i - 1].ToString());
			if (i % 8 == 0 && i != 0)
			{
				if (currentBlock != "00000000") { result = result->Insert(result->Length, ((wchar_t)ConvertToDec(0, currentBlock)).ToString()); }
				currentBlock = "";
			}
		}
		return result;
	}
	case 1:
		return ConvertToString(0, isSigned, ConvertToBinary(1, 64, input));
	case 2:
		return ConvertToString(0, isSigned, ConvertToBinary(2, 64, isSigned ? System::Convert::ToInt64(input) : System::Convert::ToUInt64(input)));
	case 3:
		return ConvertToString(0, isSigned, ConvertToBinary(3, 0, std::stod(msclr::interop::marshal_as<std::string>(input))));
	case 4:
		return input;
	}
}

double power(long long int b, long long int e)
{
	if (e==0) { return 1; }
	double result = 1;
	if (e > 0) { for (int i = 0; i < e; i++) { result *= b; } }
	else { for (int i = 0; i < std::abs(e); i++) { result /= b; } }
	return result;
}

unsigned int GetFirstInstance(wchar_t toFind, System::String^ input) 
{
	for (int i = 0; i < input->Length; i++) { if (input[i] == toFind) { return i; } }
	return 1;
}