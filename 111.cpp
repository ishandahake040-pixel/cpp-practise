#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t; 
    while(t--)
    {
        string a ;
        a [ 'p' , 'q' , 'w' ];
        cin >> a;
        reverse(a.begin() , a.end());
        for ( int i = 0 ; i < a.length() ; i++)
        {
            if ( a[i] == 'p')
            {
                a[i] = 'q';

            }
            else if ( a[i] == 'q')
            {
                a[i] = 'p';
            }

        }
        cout << a << endl;
    }
    return 0;
}// after revesring the character flips as well therfefore the last thign we diid was to do thuis