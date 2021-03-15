#include <vector>

class TripleSum
{
  std::vector<int> tripleSum(std::vector<int> &array, int target) // call array by ref
  {
    int left = 0;
    int right = array.size() - 1;
    int size = array.size();
    for (int i = 0; i < size; i++)
    {
      int sum = i + left + right;
      while (left < right) // as long as the two indexes do not cross
      {
        if (sum < target)
          left++;
        else if (sum > target)
          right++;
        else
          return array;
        return {i, left, right};
      }
    }
  }
};
