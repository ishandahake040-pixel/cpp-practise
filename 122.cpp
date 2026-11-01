#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while( t--)
    {
        int x ,y;
        cin >> x >> y;
        if ( (y > x) && (y % x == 0))
        {
           int z;
        while ( (x <= z) && ( z <= y) )
           {
              if (( z % x == 0) && ( z % y != 0))
              {
                 cout << "Yes";
              }
              else 
              {
                cout << "No";
              }
           }
        }
        else{
            cout << "No";
        }
    }
    return 0;
}
// wrong answer 2225A