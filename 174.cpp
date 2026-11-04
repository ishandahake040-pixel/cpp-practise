
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

        int a;
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a;

            if(a == -1)
            {
                count++;
            }
        }

        int ans = 0;

        while(count % 2 != 0 || count > n/2)
        {
            count--;
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
