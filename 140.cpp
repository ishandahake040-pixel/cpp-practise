#include<iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s ;
        cin >> s;
      
      for ( int i = 0 ; i < s.size() ; i++)
      {
        int smallest = s[0];
        if ( s[i] == 10 - i )
        {
            if ( s[i] < smallest)
            {
                s[i] = smallest;
                cout << smallest << endl;
            }
        }
      }
    }
}