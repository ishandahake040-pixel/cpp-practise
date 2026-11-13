#include<iostream>
using namespace std;
int  main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int m;

        if ( n % 1 == 0 && n % n == 0 && m % 1 == 0 && m % m == 0)
        {
            if ( (n + m) % 2 == 0)
            {
                cout << m << endl;
            }
    }

    }
    return 0;
}
