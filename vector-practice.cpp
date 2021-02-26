#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<int> x;
    std::cout << "Enter a list of positive numbers\n"
              << "Place a negative number at the end.\n";
    int next;
    std::cin >> next;
    while (next > 0)
    {
        x.push_back(next);
        std::cout << next << " added. ";
        std::cout << "x.size() = " << x.size() << std::endl;
        std::cin >> next;
    }

    std::cout << "You entered:\n";
    for (unsigned int i = 0; i < x.size(); i++)
    {
        std::cout << x[i] << " ";
        std::cout << std::endl;
    }
    return 0;
}
