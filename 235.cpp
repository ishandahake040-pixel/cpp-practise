
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, t;
        cin >> n >> t;

        int a[100];
        int b[100];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int maxi = 0;
        int ans = -1;

        for(int i = 0; i < n; i++)
        {
            if(i + a[i] <= t)
            {
                if(b[i] > maxi)
                {
                    maxi = b[i];
                    ans = i + 1;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}

