#include<iostream>
using namespace std;    
int main()
{
    string n;
    cin >> n;
    int ans = 0;
    for ( int i = 0 ; i < n.size() ; i++)
    {
        if ( n[i] == 'A')
        {
            int left = 0;
            int right = 0;
            for ( int j = 0 ; j < i ; j++)
            {
                if ( n[j] == 'Q')
                {
                    left ++;

                }
                for ( int j = i + 1 ; j < n.size() ; j++)
                {
                    if ( n[j] == 'Q')
                    {
                        right ++;
                    }
                    ans += left * right;
                }
            }
        }
    }
    cout << ans << endl;
}// wrong error
