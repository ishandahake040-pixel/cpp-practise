#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , a , b;
        cin >> n >> a >> b;
        int c = n /2;

         if ( n % 2 == 0)
        {
           int k = c*b ;
           cout << k << endl;
        }
        else if ( n % 2 == 1)
        {
          int m = ((n-1)/2)*b + a;
          cout << m << endl;
        }
    }
    return 0;
}