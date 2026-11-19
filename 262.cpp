#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, c;
        cin >> n >> c;

        int a[100];
        int count[101] = {0};

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            count[a[i]]++;
        }

        int sum = 0;

        for(int i = 1; i <= 100; i++)
        {
            if(count[i] > 0)
            {
                if(count[i] < c)
                    sum += count[i];
                else
                    sum += c;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
