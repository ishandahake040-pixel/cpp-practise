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
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(a[i] == 2)
            {
                count++;
            }
        }

        if(count % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int sum = 0;

            for(int i = 0; i < n; i++)
            {
                if(a[i] == 2)
                {
                    sum++;
                }

                if(sum == count / 2)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}