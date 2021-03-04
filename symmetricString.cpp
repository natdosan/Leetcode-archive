#include <iostream>
#include <string>
bool symmetric(std::string s)
{
    char symmetricLetters[] = {
        'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y', '8', '0'};

    std::pair<char, char> symmetricPairs[] = {{'9', 'P'}, {'A', 'A'}, {'I', 'I'}, {}};

    bool failed = false;
    bool pairFound;
    bool middleSymmetry;
    char firstLetter;
    char lastLetter;
    char pair1, pair2;
    std::string s = "NATE";

    if (s.size() % 2 == 0)
    {
        for (int i = 0; i < s.size() / 2; i++)
        {
            if (failed == false)
            {
                pairFound = false;
                for (int j = 0; j < s.size() / 2; j++)
                {
                    firstLetter = s[i];
                    lastLetter = s[s.size() - i - 1];
                    pair1 = symmetricPairs[j].first;
                    pair2 = symmetricPairs[j].second;

                    if ((firstLetter == pair1) && (lastLetter == pair2) || (firstLetter == pair2) && (lastLetter == pair1))
                    {
                        pairFound = true;
                        break;
                    }
                }
                if (pairFound = false)
                {
                    failed = true;
                    break;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < s.size() / 2; i++)
        {
            if (failed == false)
            {
                pairFound = false;
                for (int j = 0; j < s.size() / 2; j++)
                {
                    firstLetter = s[i];
                    lastLetter = s[s.size() - i - 1];
                    pair1 = symmetricPairs[j].first;
                    pair2 = symmetricPairs[j].second;

                    if ((firstLetter == pair1) && (lastLetter == pair2) || (firstLetter == pair2) && (lastLetter == pair1))
                    {
                        if ((j == i) && (j || i == symmetricLetters[]))
                        {
                            pairFound = true;
                            break;
                        }
                    }
                }
                if (pairFound = false)
                {
                    failed = true;
                    break;
                }
            }
        }
    }
}