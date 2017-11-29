#include <iostream>

#include "BinaryConverter.h"

using namespace std;

void runMenu();

int main()
{
    string choice;
    do{
        runMenu();
        cout << "\n\nRun again?(y/n): ";
        cin >> choice;
    }while(choice[0] == 'y' || choice [0] == 'Y');

}

void runMenu()
{
    BinaryConverter bc;
    string s;

    cout << "Menu: \n1. Binary to Decimal\n2. Decimal to Binary";
    cout << "\nEnter your choice: ";
    cin >> s;

    int choice = bc.charToInt(s[0]);
    if(choice == 1)
    {
        string binary;
        cout << "Enter binary string: ";
        cin >> binary;
        if(bc.verifyBinary(binary))
        {
            int result = bc.toDecimal(binary);
            cout << "Result = " << result;
        }
        else
            cout << "Not a valid binary string.";

    }
    else if(choice == 2)
    {
        string str;
        cout << "Enter decimal number: ";
        cin >> str;
        if(bc.verifyDecimal(str))
        {
            int dec = bc.strToInt(str);
            string binary = bc.toBinary(dec);
            cout << "Result = " << binary;
        }
        else
            cout << "Not a valid decimal number.";

    }
    else
    {
        cout << "\n ERROR." << endl;
        runMenu();
    }
}
