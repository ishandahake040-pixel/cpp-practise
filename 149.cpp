#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    int t;
    cin>>t;
   while(t--)
   {
    int n;
    cin >> n;
    string s;
    vector<string>s;
    for ( int i = 0 ; i < n ; i++)
    {
        cin >> s;
        while ( s[i] >= 'a' && s[i] <= 'z')
        {
            sort(s.begin() , s.end());

        }
        cout << s << endl;
        
    }
   }
   return 0;
}