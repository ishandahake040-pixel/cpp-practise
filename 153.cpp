#include<iostream>
using namespace std;
int  main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[100];
        int sum = 0;
        for ( int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            if ( a[i] == -a[i+1] && a[i+1] == -a[i])
            {
                sum += a[i];
            }
        }
    }
    return 0;
}
#include<iostream>
#include<algorithm>
#include<cmath>
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
        int sum = 0;
        int mini = 1000000000;
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];

            sum += abs(a[i]);

            if(a[i] < 0)
                count++;

            mini = min(mini, abs(a[i]));
        }

        if(count % 2 == 0)
            cout << sum << endl;
        else
            cout << sum - 2*mini << endl;
    }

    return 0;
}