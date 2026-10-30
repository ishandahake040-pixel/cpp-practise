
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

        string s;
        cin >> s;

        int count = 0;
        int awake = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                awake = k;
            }
            else if (awake > 0)
            {
                awake--;
            }
            else
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
