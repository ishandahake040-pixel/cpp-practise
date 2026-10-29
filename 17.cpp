#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2, pile;

    cin >> s1 >> s2 >> pile;

    string combined = s1 + s2;

    sort(combined.begin(), combined.end());
    sort(pile.begin(), pile.end());

    if (combined == pile)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}