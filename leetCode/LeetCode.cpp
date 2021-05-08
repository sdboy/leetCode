#include <iostream>
#include "TwoSum.h"

int main()
{
  TwoSum ts;
  std::vector<int> arr = std::vector<int>();
  std::vector<int> nums = { 3, 2, 4};
  int target = 6;
  arr = ts.twoSum(nums, target);
  std::cout << '[' << arr.at(0) << ',' << arr.at(1) << ']' << std::endl;
  return 0;
}