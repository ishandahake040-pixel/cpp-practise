#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    int a[100];
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int rem = abs(sum) % x;

    cout << min(rem, x - rem);

    return 0;
}