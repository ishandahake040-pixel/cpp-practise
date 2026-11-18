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

        if(n % 2050 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            n = n / 2050;

            int count = 0;

            while(n > 0)
            {
                count += n % 10;
                n = n / 10;
            }

            cout << count << endl;
        }
    }

    return 0;
}