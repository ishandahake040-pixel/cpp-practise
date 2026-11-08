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

        int one = 0, two = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(a[i] == 1)
                one++;
            else
                two++;
        }

        int ans = two + (one + 1) / 2;

        cout << ans << endl;
    }

    return 0;
}