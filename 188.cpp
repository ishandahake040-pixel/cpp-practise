#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k , x;
        cin >> n >> k >> x;
        int sum = 0;
        for ( int i = 1 ; i <=k ; i++)
        {
            if ( i == x)
            {
                continue;
            }
            sum += i;

        }
        if ( sum == n)
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