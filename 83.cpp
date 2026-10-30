#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n , k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0;
    int left = 0;
    int right = s.size() - 1;
    while ( t--)
    {
        for ( int i = 0 ; i < n ; i++)
        {
            if ( s[i] = 'L')
            {
              left ++;
              count ++;
            }
            else if ( s[i] = 'R')
            {
                right--;
                count++;
            }
            else
            {
                cout << "-1";
            }

        }
    }
    return  0;
}