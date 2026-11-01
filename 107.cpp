#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        int a[10];
        int count = 0;
        int result = 0;
        for ( int i = 0 ; i < n ; i++)
        {
            cin >>a[10];
            a[i] = a[i] + 1;
            result *= a[i];
            if ( result % k == 0)
            {
                count++;
            }
        }
    }
    return 0;
}