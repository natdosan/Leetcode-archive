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

// this method only works on strings using alphanumeric characters

/*
copyright Nathaniel dlwlrma
210313
*/

class Solution2
{
public:
    bool isPalindrome(string s)
    {
        int left = 0;
        int right = s.length() - 1;
        while (left != right)
        {
            if (s[left] != s[right])
            {
                return false;
            }
            else if (s[left] == s[right])
            {
                left++;
                right--;
                if (left == right)
                    break;
                else if (left > right)
                    break;
            }
            else
                return false;
        }
        return true;
    }
};