#include<iostream>
using namespace std;
int main()
{
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    int age = 0;
    for ( int i = 0 ; i < s.length() ; i++)
    {
        if ( s[i] == '1' )
        {
          age = age + a1;
        }
        else if ( s[i] == '2' )
        {
            age = age + a2;
        }
        else if ( s[i] == '3' )
        {
            age = age + a3;
        }
        else if ( s[i] == '4' )
        {
            age = age + a4;
        }
       
    }
    cout << age << endl;


}