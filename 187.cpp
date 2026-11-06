#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        char a, b, c;
        cin >> a >> b >> c;

        if(a == 'a' && b == 'b' && c == 'c')
        {
            cout << "Yes" << endl;
        }
        else if(a == 'a' && b == 'c' && c == 'b')
        {
            cout << "Yes" << endl;
        }
        else if(a == 'b' && b == 'a' && c == 'c')
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}