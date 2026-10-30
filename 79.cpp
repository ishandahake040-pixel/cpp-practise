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

        int h[5];

        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        int max = h[0];
        int min = h[0];

        for (int i = 1; i < n; i++)
        {
            if (h[i] > max)
                max = h[i];

            if (h[i] < min)
                min = h[i];
        }

        cout << max - min + 1 << endl;
    }

    return 0;
}