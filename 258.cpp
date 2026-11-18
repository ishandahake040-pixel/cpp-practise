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

        int a[100], b[100];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int mx1 = 0, mx2 = 0;

        for(int i = 0; i < n; i++)
        {
            int x = max(a[i], b[i]);
            int y = min(a[i], b[i]);

            mx1 = max(mx1, x);
            mx2 = max(mx2, y);
        }

        cout << mx1 * mx2 << endl;
    }
//crazy queshion
    return 0;
}