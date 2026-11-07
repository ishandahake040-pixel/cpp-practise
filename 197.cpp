#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long sum = 0;
    long long a;

    for(int i = 0; i < n-1; i++)
    {
        cin >> a;
        sum += a;
    }

    long long total = n * (n+1) / 2;

    cout << total - sum << endl;

    return 0;
}