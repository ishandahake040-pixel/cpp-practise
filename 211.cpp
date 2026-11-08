#include<iostream>
using namespace std;
int main()
{
    int q;
    cin >> q;

    while(q--)
    {
        int n;
        cin >> n;
        int count = 0;
        if ( n != 1)
        {
        if ( n % 2 == 0)
        {
            n = n/2;
            count++;
        }
        else if ( n % 3 == 0)
        {
            n = (2*n)/3;
            count++;
        }
        else if ( n % 5 == 0)
        {
            n = (4*n)/5;
            count++;
        }
    }
    cout << count << endl;
    }
    return 0;
}