
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int count = 0;
        int a[100];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int mini = 1000000000;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i+1])
            {
                count = 1;
                break;
            }

            if (a[i+1] - a[i] < mini)
            {
                mini = a[i+1] - a[i];
            }
        }

        if (count == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << mini / 2 + 1 << endl;
        }
    }

    return 0;
}
