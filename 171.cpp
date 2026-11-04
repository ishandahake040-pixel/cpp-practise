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

        int k = -1;

        for(int i = 0; i < n-1; i++)
        {
            int prod = 1;
            int prod1 = 1;

            for(int j = 0; j <= i; j++)
            {
                prod *= a[j];
            }

            for(int j = i+1; j < n; j++)
            {
                prod1 *= a[j];
            }

            if(prod == prod1)
            {
                k = i+1;
                break;
            }
        }

        cout << k << endl;
    }

    return 0;
}