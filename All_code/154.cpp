#include <iostream>
#include <string>
 
int main()
{
    std::string s = "sxychefvsvcodehghchef";
   std::string str =  "code";
   std::string str1 =  "chef";
 
    int count = 0;
    for (int i = 0; (i = s.find(str, i)) != std::string::npos; i++) {
        count++;
    }
     for (int i = 0; (i = s.find(str1, i+1)) != std::string::npos; i++) {
        count++;
    }


 
     std::cout << "Character " << str << " occurs " << count << " times";
 
    return 0;
}
