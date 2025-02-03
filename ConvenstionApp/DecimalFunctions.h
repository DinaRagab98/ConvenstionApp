#pragma once
#include<iostream>
#include<string>
#include"BinaryFunctions.h"
using namespace std;
namespace DecimalFunctions {
	string ConvertFromDecimalToBinary(int DeciNumber) {
		string BinaryNumbr = "";
		while (DeciNumber > 0) {
			BinaryNumbr = to_string(DeciNumber % 2) + BinaryNumbr;//avoid reverse
			DeciNumber /= 2;
		}
		return BinaryNumbr;
	}
	string ConvertFromDecimalToHexa(int DecimalNumber) {
		int BinaryNum = stoi(ConvertFromDecimalToBinary(DecimalNumber));
		string HexaNumber = BinaryFunction::ConvertFromBinaryToHexa(BinaryNum);
		return HexaNumber;
	}
	string ConvertFromDecimalToOctal(int DecimalNumber) {
		int BinaryNum = stoi(ConvertFromDecimalToBinary(DecimalNumber));
		string OctalNumber = BinaryFunction::ConvertFromBinaryToOctal(BinaryNum);
		return OctalNumber;
	}


}
