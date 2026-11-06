#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        if(n % 2 == 0)
        {
            cout << n / 2 << endl;
        }
        else
        {
            n = n - k;
            int count = 1;

            count += n / (k - 1);

            if(n % (k - 1) != 0)
            {
                count++;
            }

            cout << count << endl;
        }
    }

    return 0;
}