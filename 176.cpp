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

        int min = k * (k + 1) / 2;
        int max = k * (2 * n - k + 1) / 2;

        if ( x >= min && x <= max )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}                                                                                                                                           