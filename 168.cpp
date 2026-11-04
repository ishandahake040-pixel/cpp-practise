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

        int p[51];

        for(int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }

        int ans = 3;

        for(int i = 1; i <= n; i++)
        {
            if(p[p[i]] == i)
            {
                ans = 2;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
