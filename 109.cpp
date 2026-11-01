#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , j ,k;
        cin >> n >> j >> k;
        int a[200000];
        for ( int i = 0 ; i < n ; i++)
        {
            for ( int j = 0 ; j < n ;j++)
            {
            cin >> a[200000];
            if ( a[j] > a[i])
            {
                cout <<"yes";
            }
            else{
                cout << "No";
            }
        }
    }
    }
    return 0;
}