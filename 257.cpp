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
        int neg = 0;
        bool zero = false;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(a[i] < 0)
                neg++;

            if(a[i] == 0)
                zero = true;
        }

        if(zero || neg % 2 == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
    }

    return 0;
}
