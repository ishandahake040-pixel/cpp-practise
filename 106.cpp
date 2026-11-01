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

        int count = 0;

        if (n % 3 == 0)
        {
            count = 0;
        }
        else if (n % 3 == 1)
        {
            count = 2;
        }
        else
        {
            count = 1;
        }

        cout << count << endl;
    }

    return 0;
}
