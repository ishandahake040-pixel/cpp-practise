#include<iostream>
using namespace std;;
int main()
{
    int t;
    cin >> t;
    while ( t--)
    {
        int a ,  b , c;
        cin >> a >> b >> c;
        if ( a > b && c > b )
        {
        a--;   
        c--; // a goes so randomely other will grow by 1 ofc
        }
        else if ( b > a && c > a)
        {
            b--;
            c--;
        }
        else if ( a > c && b > c)
        {
            a--;
            c--;
        }
        if ( a == b && c == b)
        {
            cout << "Yes" << endl;
        }
        
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}