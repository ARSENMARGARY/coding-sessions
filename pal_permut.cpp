#include <iostream>
#include <unordered_map>

bool pal_permut(std::string str)
{
  for (int i{}; i < str.size(); ++i)
  {
    if (str[i] <= 'Z' && str[i] >= 'A')
    {
      str[i] += 32;
    }
  }
  std::unordered_map<char,int> um{};
  for (int i{}; i < str.size(); ++i)
  {
    if (str[i] != ' ')
    {
      ++um[i];
    }
  }
  auto it = um.begin();
  auto end = um.end();
  int count{};
  for (; it != end; ++it) {
    if (it->second % 2 == 0) {
      continue;
    }
    if (it->second == 1) {
      if (count) {
        return false;
      }
      ++count;
    }
    else {
      return false;
    }
  }
  return true;
}

int main()
{
    return 0;
}