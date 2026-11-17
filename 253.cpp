
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

        int first = n / 10;
        int last = (7 - (first * 10) % 7) % 7;

        n = first * 10 + last;

        cout << n << endl;
    }

    return 0;
}
