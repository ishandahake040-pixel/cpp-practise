#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[100];
        int count = 0;
        
        for ( int i = 0 ; i < n ; i++)
        {
            cin >> a[100];
            
            if ( a[i] > a[i+1] )
            {
                i --;
                count++;
            }
        }
        cout << n - count;
    }
    return 0;
   
}