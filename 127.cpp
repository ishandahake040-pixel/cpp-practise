#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        int ans = 1;

        while (n > 3)
        {
            n = n / 4;
            ans = ans * 2;
        }

        cout << ans << '\n';
    }

    return 0;
}
