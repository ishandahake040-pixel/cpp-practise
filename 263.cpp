
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
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans = ans | a[i];
        }

        cout << ans << endl;
    }

    return 0;
}
