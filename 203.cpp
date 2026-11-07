#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[100];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int previous = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] - previous >= 15)
        {
            cout << previous + 15 << endl;
            return 0;
        }

        previous = a[i];
    }

    if(90 - previous >= 15)
        cout << previous + 15 << endl;
    else
        cout << 90 << endl;

    return 0;
}