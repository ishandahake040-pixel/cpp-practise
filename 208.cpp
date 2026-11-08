#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string target = "heidi";
    int count = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == target[count])
        {
            count++;
        }

        if(count == 5)
        {
            break;
        }
    }

    if(count == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
