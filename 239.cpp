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
        int h[100];
        int count = 0;
        for ( int i = 0 ; i < n ; i++)
        {
            cin >> h[i];
        }
        for ( int i = 0 ; i < n -1 ; i++)
        {
             
            if ( h[i] < h[i+1])
            {
            count++;
            }
        }
         cout << count << endl;
         for ( int i = 0 ; i < count ; i++)
         {
             cout << h[i] << " " ;
         }
         cout  << endl;
    }
    return 0;
}