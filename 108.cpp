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

        int a[100000];
        int count = 100000;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            int x = a[i];
            int steps = 0;

            while (x % k != 0)
            {
                x++;
                steps++;
            }

            if (steps < count)
            {
                count = steps;
            }
        }

        if (k == 4)
        {
            int even = 0;
        }

        cout << count << endl;
    }

    return 0;
}
