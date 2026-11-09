#include<iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a = 0 , b = 0;
  int min = 0;
for ( int i = 0 ; i < n/2 ; i++)
{
    a+=i;
}
for ( int j = n/2 ; j <= n ; j++)
{
    b+=j;
}
if ( a - b < min)
{
    min = a - b;
}
cout << min << endl;
return 0;
}