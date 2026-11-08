/*#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char c;
        cin >> c;
        string s = "codeforces";
        for ( int i = 0 ; i < 10 ; i++)

        {
            if ( s[i] == 'c')
            {
                cout <<"Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }

        }
    }
    return 0;
}*/
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        char c;
        cin >> c;

        string s = "codeforces";
        int found = 0;

        for(int i = 0; i < 10; i++)
        {
            if(s[i] == c)
            {
                found = 1;
                break;
            }
        }

        if(found == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}