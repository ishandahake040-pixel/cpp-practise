#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

   int a[1000], b[1000], c[1000], d[1000];
    int sum1 = 0, count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];

        if (i == 0)
        {
            sum1 = a[i] + b[i] + c[i] + d[i];
        }
        else
        {
            int sum = a[i] + b[i] + c[i] + d[i];

            if (sum > sum1)
            {
                count++;
            }
        }
    }

    cout << count + 1 << endl;

    return 0;
}