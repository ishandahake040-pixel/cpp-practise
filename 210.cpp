#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int one = 0, zero = 0;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'n')
            one++;

        if(s[i] == 'z')
            zero++;
    }

    for(int i = 0; i < one; i++)
        cout << "1 ";

    for(int i = 0; i < zero; i++)
        cout << "0 ";

    return 0;
}