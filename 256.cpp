
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, q;
        cin >> n >> q;

        int a[100];
        int sum = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        while(q--)
        {
            int type, x;
            cin >> type >> x;

            if(type == 0)
            {
                for(int i = 0; i < n; i++)
                {
                    if(a[i] % 2 == 0)
                    {
                        a[i] += x;
                        sum += x;
                    }
                }
            }
            else
            {
                for(int i = 0; i < n; i++)
                {
                    if(a[i] % 2 == 1)
                    {
                        a[i] += x;
                        sum += x;
                    }
                }
            }

            cout << sum << endl;
        }
    }

    return 0;
}
