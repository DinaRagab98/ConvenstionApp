#pragma once
#include<iostream>
using namespace std;

namespace MyInput {
	string ReadString(string message) {
		string Input;
		cout << message;
		cin >> Input;
		return Input;
	}
	int ReadNumber(string message) {
		int Input;
		cout << message;
		cin >> Input;
		return Input;
	}
	int ReadBinNumber(string message) {
		string  Input = "";
		bool isValid;
		do {
			cout << message;
			cin >> Input;
			isValid = true;
			for (char c : Input) {
				if (c != '0' && c != '1') {
					isValid = false;
					cout << "\a";
					cout << "Invalid Number please enter a binary number only (1s or 0s)\n\n";
					break;
				}

			}
		} while (!isValid);
		return stoi(Input);
	}
	string ReadOctalNumber(string message) {
		string Input;
		bool isValid;
		do {

			cout << message;
			cin >> Input;
			isValid = true;
			for (char c : Input) {
				if (c < 48 || c > 55) { //0  and 7 in ascii 
					isValid = false;
					cout << "\a";
					cout << "Invalid Number please enter an octal number only (0 -> 7)\n\n";
					break;
				}

			}
		} while (!isValid);
		return Input;
	}
}