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

        int count = 0;

        for(int i = 0; i < n-1; i++)
        {
            if(a[i] > a[i+1])
            {
                count = 0;
                break;
            }

            int diff = a[i+1] - a[i];

            if(diff < count)
            {
                count = diff;
            }
        }

        if(count == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << count/2 + 1 << endl;
        }
    }

    return 0;
}