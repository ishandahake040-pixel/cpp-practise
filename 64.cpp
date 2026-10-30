#include<iostream>
using namespace std;
int main()
{
    int v;
    cin >> v;
    int x;
    int n = v;
    int smallest = 0;
    while ( ( x % v != 0) && ( x < n) )
    {
       int a =  n - x;
       if (  a < smallest)
       {
         smallest = a;
       }

    }
    cout << n;

// not correct currently

}