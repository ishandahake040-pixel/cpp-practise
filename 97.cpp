#include<iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while ( t--)
    {
        int n , k;
        cin >> n >> k;
        int a[20000];
        cin >> a[20000];
        int count = 0;
    
        for ( int i = 0 ; i < n ; i++)
        {
           if ( a[i] <= k)
           {
            count ++;
           }
           
        }
        cout << count;
    }
    return 0;
}