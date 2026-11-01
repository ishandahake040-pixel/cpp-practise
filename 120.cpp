#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x , k;
        cin >> x >> k;
        int n;
     for ( int i = 0 ; i < n ;  i++)
     {
        for ( int j = i + 1 ; j < n ; j++)
        {
            if (( j - i ) % x == 0)
            {
              cout << n;
            }
        }
     } 
    }
    return 0;
}