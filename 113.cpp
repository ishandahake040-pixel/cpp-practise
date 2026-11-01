#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , s;
        cin >> n >> s;
        int x[100];
        int pos = s;
        int count = 0;
        for ( int i = 0 ; i < n ; i++)
        {
            cin >> x[100];
            for ( int i = 0 ; i < n ; i++) 
            {
            if ( pos < x[i])
            {
              pos  = pos + 1;
              count++;
            }
            else if ( pos > x[i])
            {
                pos = pos - 1;
               count++;
            }
    
        }
    }

        cout << count;
    }
    return 0;
}