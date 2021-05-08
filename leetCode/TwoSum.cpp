#include "TwoSum.h"
#include <iostream>

std::vector<int> TwoSum::twoSum(std::vector<int>& nums, int target)
{
  std::vector<int> ans = std::vector<int>();
  for (int i = 0; i < nums.size() - 1; i++)
  {
	int j = i + 1;
	while (j < nums.size())
	{
	  if (nums.at(i) + nums.at(j) == target)
	  {
		break;
	  }
	  j++;
	}
	if (j < nums.size() && nums.at(i) + nums.at(j) == target)
	{
	  ans.push_back(i);
	  ans.push_back(j);
	  break;
	}
	
  }
  return ans;
}