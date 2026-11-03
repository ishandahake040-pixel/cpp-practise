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

        int x = 0, y = 0;

        for(int i = 0; i < n; i++)
        {
            if(a[i] == a[0])
            {
                x++;
            }
            else
            {
                y++;
            }
        }

        if(x == n || y == 0)
        {
            cout << "YES" << endl;
        }
        else if(x + y == n && (x == y || x == y + 1 || y == x + 1))
        {
           
            bool valid = true;

            for(int i = 0; i < n; i++)
            {
                if(a[i] != a[0] && a[i] != a[1])
                {
                    valid = false;
                }
            }

            if(valid)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}