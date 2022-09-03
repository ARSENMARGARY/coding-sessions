#include <iostream>

bool is_unique(const std::string& str)
{
  long s{};
  for (int i{}; i < str.size(); ++i)
  {
    if (s & (1 << ((str[i] - 65) - 1)))
    {
      return false;
    }
    s |= 1 << ((str[i] - 65) - 1);
  }
  return true;
}

int main()
{
    
    return 0;
}