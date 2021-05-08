#include "ReplaceDigits.h"

std::string replaceDigits(std::string s)
{
  int lenth = s.length() / 2;
  for (int i = 0; i < lenth; i++)
  {
    s[2 * i + 1] = s[2 * i] + (s[2 * i + 1] - 48);
  }
  return s;
}
