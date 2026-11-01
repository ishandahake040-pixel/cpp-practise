
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (a > b)
        {
            if (a % 2 == 1 && a - 1 == b)
                cout << y << endl;
            else
                cout << -1 << endl;
        }
        else
        {
            int cost = 0;

            while (a < b)
            {
                if (a % 2 == 0)
                {
                    if (x < y)
                        cost += x;
                    else
                        cost += y;

                    a++;
                }
                else
                {
                    cost += x;
                    a++;
                }
            }

            cout << cost << endl;
        }
    }

    return 0;
}
