#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , c , k;
        cin >> n >> c >> k;
        int a[100];
        for ( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            if ( a[i] <= c)
            {
                c += a[i];
            }
            while(k--)
            {
                a[i]++;
            }
            


        }
        cout << c << endl;
    }
    return 0;
} // 2209A not yet solved in chatgpt stored