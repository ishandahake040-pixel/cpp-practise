
#include<iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while(q--)
    {
        string s, t;
        cin >> s >> t;

        int i = 0;

        while(i < s.size() && i < t.size() && s[i] == t[i])
        {
            i++;
        }
        int ans = t.size() + s.size() - i ;
        if ( i < 0)
    {
        ans++;
    }
    cout << ans << endl;

    }

    return 0;
}
