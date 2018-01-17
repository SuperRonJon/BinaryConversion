#ifndef BINARYCONVERTER_H
#define BINARYCONVERTER_H

#include <string>

class BinaryConverter
{
public:
    string toBinary(int num);
    int toDecimal(std::string binary);
    bool verifyBinary(std::string binary);
    bool verifyDecimal(std::string dec);
    int charToInt(char c);
    int strToInt(std::string s);
};

#endif // BINARYCONVERTER_H
