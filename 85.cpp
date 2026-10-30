#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    { 
    int n;
    cin >> n;
    string s;
    string t;
    cin >> s >> t;
    for (int i = 0 ; i < n ; i++)
    {
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());

        if ( s[i] == t[i])
        {
            cout <<"Yes";
        }
        else 
        {
            cout << "No";
        }
    }
    }
return 0;
}