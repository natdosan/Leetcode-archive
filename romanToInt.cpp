#include <iostream>
#include <map>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> roman =
            {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000},
                {'i', 1},
                {'v', 5},
                {'x', 10},
                {'l', 50},
                {'c', 100},
                {'d', 500},
                {'m', 1000}};

        int sum = roman[s.back()]; // returns a reference to the last index in a vector
        for (int i = s.length() - 2; i >= 0; --i)
        {
            if (roman[s[i]] < roman[s[i + 1]])
                sum -= roman[s[i]];
            else
                sum += roman[s[i]];
        }
        return sum;
    }
};