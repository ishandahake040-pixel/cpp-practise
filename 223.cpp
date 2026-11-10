#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int r, b, d;
        cin >> r >> b >> d;

        int mx = max(r, b);
        int mn = min(r, b);

        if(mx <= mn * (d + 1))
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