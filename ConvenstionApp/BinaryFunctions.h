#pragma once
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
namespace BinaryFunction {
	int ConvertFromBinaryToDecimal(int BinaryNum) {
		int power = 0;
		int DecimalNum = 0;
		while (BinaryNum > 0) {
			DecimalNum += (BinaryNum % 10) * pow(2, power);
			power++;
			BinaryNum /= 10;
		}
		return DecimalNum;
	}
	string ConvertFromBinaryToHexa(int BinaryNum) {
		int HexaNum = 0, power = 0;
		string TotalHexaNum = "";
		while (BinaryNum > 0) {
			HexaNum += (BinaryNum % 10) * pow(2, power);
			power++;
			BinaryNum /= 10;
			if (power == 4 || BinaryNum == 0) { // group of 4 or last group
				char HexaChar;
				if (HexaNum < 10)
					HexaChar = HexaNum + '0';
				else // for characters
					HexaChar = 'A' + (HexaNum - 10);
				TotalHexaNum = HexaChar + TotalHexaNum; // to avoid the reverse 
				HexaNum = 0; // to anther group 
				power = 0;
			}

		}
		return TotalHexaNum;
	}

	string ConvertFromBinaryToOctal(int BinaryNum) {
		int OctalNum = 0, power = 0;
		string TotalOctalNum = "";
		while (BinaryNum > 0) {
			OctalNum += (BinaryNum % 10) * pow(2, power);
			power++;
			BinaryNum /= 10;
			if (power == 3 || BinaryNum == 0) { // group of 3 or last group
				char OctalChar;
				OctalChar = OctalNum + '0';
				TotalOctalNum = OctalChar + TotalOctalNum; // to avoid the reverse 
				OctalNum = 0; // to anther group 
				power = 0;
			}

		}
		return TotalOctalNum;
	}



}