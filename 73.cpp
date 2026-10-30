#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ones = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x == 1)
            {
                ones++;
            }
        }

        int zeroes = n - ones;

        if (ones >= zeroes)
        {
            cout << "Bessie\n";
        }
        else
        {
            cout << "Elsie\n";
        }
    }

    return 0;
}