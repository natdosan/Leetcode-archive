
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int maxNum;
    bool prime = true;
    cin >> maxNum;
    vector<int> primeSequence;

    for (int i = 1; i <= maxNum; i++) // if i is less than the inputted number
    {
        for (int j = 2; j < i; j++) //
        {
            if (i % j == 0 || i == 1) // if remander is 0 or if
            {
                prime = false;
            }
        }
        if (prime == true)
        {
            primeSequence.push_back(i);
            cout << primeSequence[i] << " is a prime\n";
        }
        prime = true;
    }
}