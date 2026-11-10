#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            count++;
        }
    }

    int n = s.size();

    if (count > n / 2)
    {
        cout << n << endl;
    }
    else
    {
        cout << 2 * count - 1 << endl;
    }

    return 0;
}