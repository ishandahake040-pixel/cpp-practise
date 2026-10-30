#include<iostream>
using namespace std;
int main()
{
int n;
cin >> n;
string s;
int count = 0;
for ( int i = 0 ; i < n ; i++)
{
    if ( s[i] == '7' && s[i] == '8' )
    {
        count ++;
    }
    
}
cout << count;
return 0;
}