#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n == 1)
    {
        cout << 1 << endl;
        cout << s << endl;
    }
    else if (s.find('0') != string::npos && s.find('1') != string::npos)
    {
        cout << 2 << endl;
        cout << s[0] << " " << s.substr(1) << endl;
    }
    else
    {
        cout << 1 << endl;
        cout << s << endl;
    }

    return 0;
}