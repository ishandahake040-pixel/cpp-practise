#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        int count = 0;
        for ( int i = 0 ; i < n ; i++)
        { 
            
            cin >> s;
            if ( s[i] == 'R' && s[i - 1] == 'B')
            {
              count++;
            }

    }
    cout << count << endl;
    }
    return 0;
}