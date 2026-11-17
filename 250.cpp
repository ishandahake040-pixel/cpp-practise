
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s[100];
    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int count = 0;

    for(int i = 0; i < s[0].size(); i++)
{
        bool same = true;

        for(int j = 1; j < n; j++)
        {
            if(s[j][i] != s[0][i])
            {
                same = false;
                break;
            }
        }

        if(same)
            count++;
        else
            break;
    }

    cout << count;

    return 0;
}
