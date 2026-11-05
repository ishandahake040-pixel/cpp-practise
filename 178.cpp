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

        if(a[0] == a[n-1])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            for(int i = 0; i < n; i++)
            {
                if(i == 1)
                {
                    cout << "R";
                }
                else
                {
                    cout << "B";
                }
            }

            cout << endl;
        }
    }

    return 0;
}