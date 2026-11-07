#include<iostream>
using namespace std;

int main()
{
    long long k, n, s, p;
    cin >> k >> n >> s >> p;

    long long sheets = (n + s - 1) / s;

    long long totalSheets = k * sheets;

    long long packs = (totalSheets + p - 1) / p;

    cout << packs << endl;

    return 0;
}