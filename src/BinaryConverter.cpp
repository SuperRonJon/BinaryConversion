#include <cmath>
#include <sstream>

#include "BinaryConverter.h"

using namespace std;

string BinaryConverter::toBinary(int num)
{
    string result;
    int mod = 0;

    if(num == 0)
        return "0";

    while(num != 0)
    {
        mod = num % 2;
        num /= 2;
        if(mod == 1)
            result.insert(0, "1");
        else
            result.insert(0, "0");

    }

    return result;
}

int BinaryConverter::toDecimal(string binary)
{
    int power = 0;
    int sum = 0;

    for(int i = binary.size() - 1; i >= 0; i--)
    {
        int num = charToInt(binary[i]);
        if(num == 1)
            sum += pow(2, power);
        power++;
    }
    return sum;
}

int BinaryConverter::charToInt(char c)
{
    return c - '0';
}

int BinaryConverter::strToInt(string s)
{
    stringstream ss(s);

    int x = 0;
    ss >> x;
    return x;
}

bool BinaryConverter::verifyBinary(string binary)
{
    for(int i = 0; i < binary.size(); i++)
    {
        if(binary[i] != '1' && binary[i] != '0')
            return false;
    }

    return true;
}

bool BinaryConverter::verifyDecimal(string dec)
{


    for(int i = 0; i < dec.size(); i++)
    {
        if(dec[i] < '0' || dec[i] > '9')
            return false;
    }

    return true;
}
