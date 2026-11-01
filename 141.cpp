#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        int count = 0;
        for ( int i = 0 ; i < n ; i++)
        {

            s[i] = c;
            int left = 0 ;
            int right = n  - 1;
            if  ( left < right)
{
    left ++;
    count++;
}
else if ( right < left)
{
    right ++;
    count++;
}
        }
    }
    return 0;
}
// not able to solve 2267A