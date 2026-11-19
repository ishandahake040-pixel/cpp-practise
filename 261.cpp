#include<iostream>
using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;

    for(int i = l; i <= r; i++)
    {
        int x = i;
        int a[10] = {0};
        bool flag = true;

        while(x > 0)
        {
            int digit = x % 10;

            if(a[digit] == 1)
            {
                flag = false;
                break;
            }

            a[digit] = 1;
            x = x / 10;
        }

        if(flag)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
