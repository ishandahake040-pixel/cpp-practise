/*#include<iostream>
using namespace std;
int main()
{
    int t , n;
    cin >> t >> n;
    int x;
    if ( n * n == x)
    {
      cout << x;
    }

    
}*/
#include<iostream>
using namespace std;
int main()
{
    int t ;
    cin >> t;
    while( t--)
    {
        int n;
        cin >> n;
        for ( int i = 0 ; i <= n ; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}