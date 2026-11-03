#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, n;
        cin >> n >> x;

        int a[100];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int volume = a[0];

        for(int i = 1; i < n; i++)
        {
            if(a[i] - a[i-1] > volume)
            {
                volume = a[i] - a[i-1];
            }
        }

        if(2 * (x - a[n-1]) > volume)
        {
            volume = 2 * (x - a[n-1]);
        }

        cout << volume << endl;
    }

    return 0;
}