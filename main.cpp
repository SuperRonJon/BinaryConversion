#include <iostream>

#include "BinaryConverter.h"

using namespace std;

int main()
{
    BinaryConverter bc;
    string result = bc.toBinary(2);
    int res = bc.toDecimal(result);
    cout << result << endl << res;
}
