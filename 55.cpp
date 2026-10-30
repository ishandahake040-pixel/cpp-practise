#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string numbers = "";

    for (char c : s)
    {
        if (c != '+')
            numbers += c;
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); i++)
    {
        if (i > 0)
            cout << "+";

        cout << numbers[i];
    }

    return 0;
}