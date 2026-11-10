#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;

        int total = (a + b) / 4;
        int minimum = min(a, b);

        cout << min(total, minimum) << endl;
    }

    return 0;
}