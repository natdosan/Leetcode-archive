#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> myVector;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
                myVector.push_back("FizzBuzz");
            else if (i % 3 == 0)
                myVector.push_back("Fizz");
            else if (i % 5 == 0)
                myVector.push_back("Buzz");
            else
                myVector.push_back(to_string(i));
        }
        return myVector;
    }
};