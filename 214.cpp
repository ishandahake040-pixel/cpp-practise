#include<iostream>
using namespace std;
int main()
{
    int n;

    cin >> n ;
    int a[100];
    int one = 0 , zero = 0;
    for ( int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
        if ( a[i] == 0 )
        {
            zero++;
        
        }
        else 
        {
            one++;
        }

    }
    if ( one > 0)
    {
        cout << "Hard" << endl;
    }
    else
    {

        cout << "Easy" << endl;
    }
    return 0;
}