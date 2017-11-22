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
        int result = bc.toDecimal(binary);
        cout << "Result = " << result;
    }
    else if(choice == 2)
    {
        int dec = 0;
        cout << "Enter decimal number: ";
        cin >> dec;
        string binary = bc.toBinary(dec);
        cout << "Result = " << binary;
    }
    else
    {
        cout << "\n ERROR." << endl;
        runMenu();
    }
}
