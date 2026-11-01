#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        int count = r / k - l + 1;

        if(count < 0)
        {
            count = 0;
        }

        cout << count << '\n';
    }

    return 0;
}