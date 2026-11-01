#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n;
        int count = 0;
        int a[100];

        for ( int i = 0 ; i < n ; i++)
    {
        for ( int j = i + 1 ; j < n ; j++ )
        {
            cin >> a[i];
            if ( a[i] == a[j])
            {
                count++;
            }
        }

    }
    }
    return 0;
}