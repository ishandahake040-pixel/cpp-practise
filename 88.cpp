#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sum = 0;
    int k;
    int largest = 0;
    while ( t--)
    {
        int n;
        cin >> n;
        int a[10];
      
        for ( int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
             sum += a[i];
        }
        if ( k = (1/('r' -'l' + 1))*sum)
        {
            if ( k > largest)
            {
                k = largest;
            }
        }
        cout << largest;
    }
}