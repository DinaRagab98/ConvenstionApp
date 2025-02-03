#pragma once
#include<iostream>
#include"DecimalFunctions.h"
#include"BinaryFunctions.h"
using namespace std;

namespace HexaFunctions {
	string ConvertFromHexaToBinary(string HexaNum) {
		string BinaryNum, TotalBinaryNum;
		for (int i = 0;i < HexaNum.length();i++) {
			int HexaInt;
			BinaryNum = "";
			if (HexaNum[i] >= 65)
				HexaInt = HexaNum[i] - 'A' + 10;
			else
				HexaInt = HexaNum[i] - '0';
			BinaryNum = (DecimalFunctions::ConvertFromDecimalToBinary(HexaInt));
			while (BinaryNum.length() < 4)
				BinaryNum = '0' + BinaryNum;

			TotalBinaryNum += BinaryNum;
		}
		return TotalBinaryNum;
	}
	int ConvertFromHexaToDecimal(string HexaNum) {
		string BinNum = ConvertFromHexaToBinary(HexaNum);
		int DecimalNum = BinaryFunction::ConvertFromBinaryToDecimal(stoi(BinNum));
		return DecimalNum;
	}
	string ConvertFromHexaToOctal(string HexaNum) {
		string BinNum = ConvertFromHexaToBinary(HexaNum);
		string OctalNum = BinaryFunction::ConvertFromBinaryToOctal(stoi(BinNum));
		return OctalNum;
	}

}
