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
        int a[100];
        for ( int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            for ( int i = 1 ; i  <= n ; i++)
            {
                for ( int j = 1 ; j <= n ; j++)
                {
                    if ( (a[i] - a[j]) % k != 0 )
                    {
                        cout << "yes" << endl;
                    }
                    else
                    {
                        cout << "NO" << endl;
                    }
                }
            }
        }
    }
    return 0;
}