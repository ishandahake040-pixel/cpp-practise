#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[100];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }



      sort( a , a + n);
        bool possible = true;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] > 1)
            {
                possible = false;
                break;
            }
        }

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
// here sort is basically sorting all the elements in the manner so it is easy to understand and mannerable







