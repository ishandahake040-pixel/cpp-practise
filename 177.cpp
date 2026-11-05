#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x , y ;
        cin >> x >> y;
        cout << min(x,y) << endl;
        cout  << max(x,y) << endl;
    }
    return 0;
}