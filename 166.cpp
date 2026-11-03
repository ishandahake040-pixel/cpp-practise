#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k , x;
        cin >> n >> k >> x;
        int sum  = 0;
         for ( int i = 0 ; i <= k ; i++)
         {
            sum += i;
         }
         sum = sum - x;
         if ( sum == n)
         {
            cout << "YES" << endl;
         }
         else
         {
            cout << "NO" << endl;
         }
         cout << k - 1 << endl;
         int a[100];
         for ( int i = 0 ; i <= k  ; i++)
         {
            if ( sum += a[i] == n)
            {
            cout << a;
            }
         }
    }
    return 0;
}