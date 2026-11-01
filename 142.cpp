#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a;
        string b ;
        int count = 0;
        vector < string > a;
        for ( int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            cin >> b[i];
            sort(a.begin() , a.end());
            if ( a[i] <= b[i])
            {
              a.pop_back();
              count++;
              cout << count << endl;
            }





        }
    }
    return 0;
}