#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &data, int target)
  {
    int left = 0;
    int right = data.size() - 1;
    while (left < right)
    {
      int sum = data[left] + data[right];
      if (sum == target)
        break; // dont need to return here since we return at the end of the while loop
      else if (sum < target)
        right--;
      else if (sum > target)
        left++;
      else
        return data;
    }
    return {left, right};
  }
};