
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

        for(int i = 0; i < 2*n; i++)
        {
            cin >> a[i];

            if(a[i] == 1)
            {
                count++;
            }
        }

        int l = count % 2;
        int o = min(count, 2*n - count);

        int k = min(l, o);
        int m = max(l, o);

        cout << k << " " << m << endl;
    }

    return 0;
}
