#include <iostream>
#include <string>

void urlify(std::string& str)
{
  std::string helper = "%20";
  for (int i{}; i < str.size(); ++i)
  {
    if (str[i] == ' ')
    {
      str.replace(i, 1, helper);
    }
  }
}

int main()
{
    return 0;
}