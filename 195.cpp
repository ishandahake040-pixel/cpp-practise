#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int minimum = min(a, b);
    int difference = max(a, b) - minimum;

    cout << minimum << endl;
    cout << difference / 2 << endl;

    return 0;
}

