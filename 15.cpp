#include<iostream>
using namespace std;
int main(){
int n ;
string s;
cin >> n ;
cin >> s;
int first = 0;
int second = 0;
bool lucky = true;
if ( n % 2 != 0)
{
    lucky = false;
}
for ( int i = 0 ; i < n ; i++)
{
    if ( s[i] != '4' && s[i] != '7')
    {
        lucky = false;
    }
    if ( i < n/2 )
    {
    first = first +  s[i]  -  '0';
    }
    else{
        second = second + s[i] - '0';
    }
}
    if  (first != second)
    {
        lucky = false;
    }

    if (lucky)
        cout << "YES";
    else
        cout << "NO";

    return 0;

}
