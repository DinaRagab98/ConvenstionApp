#pragma once

#include <iostream>
#include <iomanip>
#include <Windows.h>
#include "MyInput.h"
#include "BinaryFunctions.h"
#include "DecimalFunctions.h"
#include "HexaFunctions.h"
#include "OctalFunctions.h"

using namespace std;

namespace StartConvension {

    string Tabs(int numOftabs) {
        string t = "";
        while (numOftabs--) {
            t += "\t";
            cout << t;
        }
        return t;
    }

    void Conversion() {
        cout << Tabs(2) << setw(45) << "|-----------------------------------------|\n";
        cout << Tabs(2) << setw(45) << "|    Hello, Welcome to Conversion App     |\n";
        cout << Tabs(2) << setw(45) << " |-----------------------------------------|\n\n";

        cout << Tabs(2) << setw(45) << "|-----------------------------------------|\n";
        cout << Tabs(2) << setw(45) << "| Operations are to convert from:         |\n";
        cout << Tabs(2) << setw(45) << "|-----------------------------------------|\n";

        cout << Tabs(2) << " | 1 - Binary          | 2 - Decimal       |\n";
        cout << Tabs(2) << " | 3 - Hexadecimal     | 4 - Octal         |\n";

        cout << Tabs(2) << setw(45) << " |-----------------------------------------|\n\n";

        cout << Tabs(2) << "\nWhat is your choice to convert from: ";
        int choice = MyInput::ReadNumber(" ");
        int number = 0;
        string sNumber = "";
        bool valid = false;
        while (!valid) {
            if (choice == 1) { // Binary Conversion
                system("cls");
                number = MyInput::ReadBinNumber("Please enter a binary number: ");
                cout << "\n\n|-------------------------------------------------------|\n";
                cout << "| Number in Decimal : " << BinaryFunction::ConvertFromBinaryToDecimal(number) << " \n"
                    << "| Number in Hexadecimal : " << BinaryFunction::ConvertFromBinaryToHexa(number) << " \n"
                    << "| Number in Octal : " << BinaryFunction::ConvertFromBinaryToOctal(number) << " \n";
                cout << "|-------------------------------------------------------|\n";
                valid = true;
            }
            else if (choice == 2) { // Decimal Conversion
                system("cls");
                number = MyInput::ReadNumber("Please enter a Decimal number: ");
                cout << "\n\n|-------------------------------------------------------|\n";
                cout << "| Number in Binary : " << DecimalFunctions::ConvertFromDecimalToBinary(number) << " \n"
                    << "| Number in Hexadecimal : " << DecimalFunctions::ConvertFromDecimalToHexa(number) << " \n"
                    << "| Number in Octal : " << DecimalFunctions::ConvertFromDecimalToOctal(number) << " \n";
                cout << "|-------------------------------------------------------|\n";
                valid = true;
            }
            else if (choice == 3) { // Hexadecimal Conversion
                system("cls");
                sNumber = MyInput::ReadString("Please enter a Hexadecimal number: ");
                cout << "\n\n|-------------------------------------------------------|\n";
                cout << "| Number in Binary : " << HexaFunctions::ConvertFromHexaToBinary(sNumber) << " \n"
                    << "| Number in Decimal : " << HexaFunctions::ConvertFromHexaToDecimal(sNumber) << " \n"
                    << "| Number in Octal : " << HexaFunctions::ConvertFromHexaToOctal(sNumber) << "\n";
                cout << "|-------------------------------------------------------|\n";
                valid = true;
            }
            else if (choice == 4) { // Octal Conversion
                system("cls");
                sNumber = MyInput::ReadOctalNumber("Please enter an Octal number: ");
                cout << "\n\n|-------------------------------------------------------|\n";
                cout << "| Number in Binary : " << OctalFunctions::ConvertFromOctalToBinary(sNumber) << "\n"
                    << "| Number in Decimal : " << OctalFunctions::ConvertFromOctalToDecimal(sNumber) << " \n"
                    << "| Number in Hexadecimal : " << OctalFunctions::ConvertFromOctalToHexa(sNumber) << "\n";
                cout << "|-------------------------------------------------------|\n";
                valid = true;
            }
            else {
                cout << "Invalid Option ! Please enter number 1 ,2, 3 or 4  : ";
                choice = MyInput::ReadNumber(" ");
            }
        }
    }
}
