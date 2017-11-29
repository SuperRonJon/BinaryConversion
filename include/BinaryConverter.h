#ifndef BINARYCONVERTER_H
#define BINARYCONVERTER_H

#include <string>

using namespace std;

class BinaryConverter
{
public:
    string toBinary(int num);
    int toDecimal(string binary);
    bool verifyBinary(string binary);
    bool verifyDecimal(string dec);
    int charToInt(char c);
    int strToInt(string s);
};

#endif // BINARYCONVERTER_H
