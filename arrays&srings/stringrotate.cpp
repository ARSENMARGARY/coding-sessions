#include <iostream>
#include <string>
bool stringrotation(std::string str1, std::string str2)
{
  if(str1.size() != str2.size())
            return false;
        if(str1 == str2)
            return true;
        
        int len = str2.size();
        while(len--)
        {
            if(str1 == str2)
                return true;
            str1 = str1.substr(1) + str1[0];
        }
        return false;
}