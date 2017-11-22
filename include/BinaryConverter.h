#ifndef BINARYCONVERTER_H
#define BINARYCONVERTER_H

#include <string>

using namespace std;

class BinaryConverter
{
public:
    string toBinary(int num);
    int toDecimal(string binary);
    int charToInt(char c);
};

#endif // BINARYCONVERTER_H
