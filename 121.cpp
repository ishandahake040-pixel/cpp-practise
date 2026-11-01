#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int largest = 0;
    while(t--)
    {
      int a[4];
        for ( int i = 1 ; i < 4 ; i++)
        {
            cin >> a[4];
            if ( a[i+2] == a[i] + a[i+1])
            {
              if ( a[3] > largest)
              {
                a[3] = largest;
              }
            }
        }
        cout << largest;
    }
}