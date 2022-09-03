#include <iostream>
#include <string>

std::string comparison(const std::string& line)
{
  std::string result;
  int index{};
  int size = line.size();
  while (index != size) {
    int count{1};
    while ((index + count < size) && (line[index + count] == line[index]))
    {
      ++count;
    }
    result.push_back(line[index]);
    result += std::to_string(count);
    index += count;
  }
  return (result.size() < line.size() ? result : line);
}

int main()
{
    return 0;
}