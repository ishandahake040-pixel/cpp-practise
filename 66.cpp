#include<iostream>
#include<numeric>
using namespace std;
int main()
{
    int t;
    cin >> t ;
    while ( t--)
    {
        int n;
        cin >> n;
        int first , last , x;
        cin >> first ;
        for ( int i = 1 ; i < n ; i++)
        {
            cin >> x;
            if ( i == n - 1)
            {
                last = x;
            }
        }
        cout << gcd( first , last )  << endl;

    }
    return 0;
   
} // didnt quite understand