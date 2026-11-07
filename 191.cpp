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

        int a[100];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int count1 = 0;
        int count2 = 0;
        int x = a[0];
        int y = -1;
        bool flag = true;

        for(int i = 0; i < n; i++)
        {
            if(a[i] != x && y == -1)
            {
                y = a[i];
            }

            if(a[i] == x)
            {
                count1++;
            }
            else if(a[i] == y)
            {
                count2++;
            }
            else
            {
                flag = false;
            }
        }

        if(flag && (y == -1 || abs(count1-count2) <= 1))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}