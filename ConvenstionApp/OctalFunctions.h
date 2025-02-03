#pragma once

#include<iostream>
#include"DecimalFunctions.h"
#include"BinaryFunctions.h"
using namespace std;

namespace OctalFunctions {
	string ConvertFromOctalToBinary(string OctalNum) {
		string BinaryNum, TotalBinaryNum;
		for (int i = 0;i < OctalNum.length();i++) {
			int OctalInt;
			BinaryNum = "";
			if (OctalNum[i] >= 65)
				OctalInt = OctalNum[i] - 'A' + 10;
			else
				OctalInt = OctalNum[i] - '0';
			BinaryNum = (DecimalFunctions::ConvertFromDecimalToBinary(OctalInt));
			while (BinaryNum.length() < 3)
				BinaryNum = '0' + BinaryNum;

			TotalBinaryNum += BinaryNum;
		}
		return TotalBinaryNum;
	}
	int ConvertFromOctalToDecimal(string OctalNum) {
		string BinNum = ConvertFromOctalToBinary(OctalNum);
		int DecimalNum = BinaryFunction::ConvertFromBinaryToDecimal(stoi(BinNum));
		return DecimalNum;
	}
	string ConvertFromOctalToHexa(string OctalNum) {
		string BinNum = ConvertFromOctalToBinary(OctalNum);
		string HexaNum = BinaryFunction::ConvertFromBinaryToHexa(stoi(BinNum));
		return HexaNum;
	}


}
