#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    bool bulb[100] = {};

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            bulb[x] = true;
        }
    }

    for (int i = 1; i <= m; i++)
    {
        if (!bulb[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}