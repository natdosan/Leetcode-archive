
#include <vector>    // std::vector
#include <algorithm> // std::sort
using namespace std;

class Solution
{
public:
  vector<int> sortedSquares(vector<int> &nums)
  {
    vector<int> &squares(nums);
    int size = (int)nums.size();
    for (int i = 0; i < size; i++)
    {
      squares[i] = nums[i] * nums[i];
    }
    sort(squares.begin(), squares.end());
    return squares;
  }
};