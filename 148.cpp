#include<iostream>
#include<algorithm>
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

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a+n);

        int ans = 2 * ((a[n-1] - a[0]) + (a[n-2] - a[1]));

        cout << ans << endl;
    }

    return 0;
}
