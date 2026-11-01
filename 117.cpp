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
        
        int m = 0 ;
        while ( n--)
        {
            m++;
        }
        int count = 0;
           int m1 , m2 , m3;
           if ( m >= 3)
           {
            m1 + m2 + m3 == m;
            1 <= m1 <= m2 <= m3;
            count++;
        }
        else if ( m == 2)
        {
            count = count;
        }
        cout << count ;
    }
    return 0;
} 