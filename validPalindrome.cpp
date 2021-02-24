#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int start = 0;
        int remainingLen = s.length() - 1;

        while (start < remainingLen)
        {
            if (!isalnum(s[start]))
                start++;
            else if (!isalnum(s[remainingLen]))
                remainingLen--;
            else                                                       // could theoretically use toupper
                if (tolower(s[start++]) != tolower(s[remainingLen--])) //compares the two characters as the indexes move away from the endpoints

                return false;
        }
        return true;
    }
};