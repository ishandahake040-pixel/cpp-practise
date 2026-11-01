#include<iostream>
using namespace std;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
     int m ,  a  , b , c;
     cin >> m >> a >> b >> c;
     int x = min(m,a);
     int y = min(m,b);
     int rem = (m - x) + (m - y);
     int ans = x + y + min(rem , c);
     cout << ans;
    }
    return  0;
}