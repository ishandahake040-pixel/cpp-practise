
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (x < abs(y))
        {
            cout << -1 << endl;
        }
        else
        {
            cout << x << endl;
        }
    }

    return 0;
}
