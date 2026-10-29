#include <iostream>
using namespace std;

int main()
{
    int m;
    string n;

    int count = 0;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        if (n[i] == '0' + i)
        {
            count++;
        }
    }

    int k = m - count;

    cout << k;

    return 0;
}
