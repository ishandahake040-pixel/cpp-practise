
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[100];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int first = -1;
        int last = -1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                if (first == -1)
                {
                    first = i;
                }

                last = i;
            }
        }

        if (last - first + 1 <= k)
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
