#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[100];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout << a[i] + a[i+1] << " ";
    }

    cout << a[n-1];

    return 0;
}