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
        int a[100];
        for ( int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        for ( int i = 1 ; i < n ; i++)
        {
            if ( a[i] - a[i-1] == 5 || a[i] - a[i-1] == 7)
            {
                cout << "Yes" <<"\n";
            }
            else
            {
                cout << "NO"<<"\n";
            }
        } 
    }
    return 0;
}