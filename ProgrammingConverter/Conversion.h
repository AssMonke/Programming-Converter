#pragma once
#include <list>
#include <string>
#include <msclr\marshal_cppstd.h>

wchar_t const hex16[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

bool VerifyInput(unsigned char, bool, System::String^, System::String^*);
unsigned char GetMinimumBits(long long int);

System::String^ ConvertToBinary(unsigned char, unsigned char, System::String^);
System::String^ ConvertToBinary(unsigned char, unsigned int, unsigned long long int);
System::String^ ConvertToBinary(unsigned char, unsigned char, long long int);
System::String^ ConvertToBinary(unsigned char, unsigned char, double);

System::String^ ConvertToHex(unsigned char, bool, System::String^);
System::String^ ConvertToHex(unsigned char, unsigned long long int);
System::String^ ConvertToHex(unsigned char, long long int);
System::String^ ConvertToHex(unsigned char, double);

unsigned long long int ConvertToDec(unsigned char, System::String^);
long long int SConvertToDec(unsigned char, System::String^);
long long int SConvertToDec(unsigned char, unsigned char, double);

float ConvertToFloat(unsigned char, bool, unsigned char, System::String^);
double ConvertToDouble(unsigned char, bool, unsigned char, System::String^);

System::String^ ConvertToString(unsigned char, bool, System::String^);

double power(long long int b, long long int e);
unsigned int GetFirstInstance(wchar_t, System::String^);