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
        int count = 0;
        if ( n % 3 == 0)
        {
          count = 0;
        }
        else{
            n = n + 1;
            count++;
        }
        cout << count << endl;
    }
}