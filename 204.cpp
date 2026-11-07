#include<iostream>
using namespace std;
int main()
{
    int n , k;
    cin >> n >> k;
    int x;
    int small = 0;
    if ( x > n && x % k == 0)
    {
       if ( x < small)
       {
        small = x;
       }
    }
    cout << x << endl;
    return 0;
}