#include <iostream>
class solution
{
public:
    int hammingDist(int x, int y)
    {
        //int xy = x ^ y:  xor
        int d = 0;
        for (int xy = x ^ y; xy > 0; xy >>= 1) // shifts to the next
        {
            if ((xy & 1) > 0)
                d++; // shifts to the right
        }            // the moment xy reaches 0, you are done finding the hamming dist
        return d;
    }
};