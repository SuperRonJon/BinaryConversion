#include <cmath>

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
