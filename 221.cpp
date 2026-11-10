#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 1, b = 1, c = n - 2;

    if (c % 3 == 0)
    {
        a = 1;
        b = 2;
        c = n - 3;
    }

    cout << a << " " << b << " " << c << endl;

    return 0;
}