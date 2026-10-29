#include<iostream>
#include<string>
int main(){
 std::string name;
 std::cin >> name;
if ( name.size() % 2 == 0)
{
    std::cout << "CHAT WITH HER!" ;
}
else {
    std::cout << "IGNORE HIM!" ;
}
return 0;
}