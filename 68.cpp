#include<iostream>
using namespace std;
int main()
{
    int t , n;
    cin >> t >> n;
    string a;
    cin >> a;
    int  temp;
    int count = 0;
    for (int i = 0 ; i < n ; i++)
    {
      
         if ( a[0] == '0' && a[n-1] == '0')
        {
            count ++;
        }
        else if ( a[0] != '0' )
        {
            if ( a[i] == '0' )
            {
                temp = a[0];
                a[0] = a[i];
                a[i] = temp;

            }
        }
        else if ( a[n - 1] != '0')
        {
            if ( a[i] == '0')
            {
                temp = a[n - 1];
                a[n - 1] = a[i];
                a[i] = temp;
            }
        }
    }
    cout << count;
    
}