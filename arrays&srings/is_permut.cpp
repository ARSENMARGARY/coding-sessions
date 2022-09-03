#include <iostream>
#include <unordered_map>
#include <string>


bool is_permut(std::string str1, std::string str2) 
{
    if (str1.size() != str2.size()){return false;}
    std::unordered_map<char, int> um1{};
    for (int i{}; i < str1.size(); ++i)
    {
      um1[str1[i]]++;
    }
    std::unordered_map<char, int> um2{};
    for (int i{}; i < str1.size(); ++i)
    {
      um2[str2[i]]++;
    }
    for (auto it : um1)
    {
      if (um2[it.first] != it.second)
      {
          return false;
      }
    }
  return true;
  }

int main()
{
    return 0;
}