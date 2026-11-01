
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int ans = a;

        int rem = b % 3;

        if(rem != 0)
        {
            int need = 3 - rem;

            if(c < need)
            {
                cout << -1 << endl;
                continue;
            }

            c -= need;
        }

        ans += (b + 2) / 3;
        ans += (c + 2) / 3;

        cout << ans << endl;
    }

    return 0;
}
