#include<iostream>
using namespace std;
int main()
{
int t , n ;
cin >> t >> n;
string a;
cin >> a;
int largest = 0;
for ( int i = 0 ; i < n ; i++)
{
    if ( a[i] == a[i] - '2')
    {
        if ( a[i] > largest )
        {
           a[i] = largest;
        }
    }
}
cout << largest;
}