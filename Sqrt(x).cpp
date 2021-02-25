#include <cmath>
#include <iostream>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x >= 0)
        {
            x = sqrt(x);
        }
        else if (x < 0)
        {
            cout << "Needs a positive integer" << endl;
        }
        else
            cout << "Needs a valid integer" << endl;
        return x;
    }
};