#include<iostream>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
    int x;
    int n;
    cin >>n;
    int a[100];
    cin >> a[100];
    int count = 0;
    for ( int i = 0 ; i < n ; i++)
    {
        for ( int j = 1 ; j < n ; j++)
        {
          if ( a[j] < x)
          {
            a[j] = a[j] + 1;
            count++;
          }
          else if ( a[j] > x)
          {
            a[j] = a[j] - 1;
            count++;
          }
          else 
          {
            return 0;
          }

        }
    }
    cout << count;
   }
}