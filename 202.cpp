/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for ( int i = 0 ; i <= n ; i++)
    {
        if ( i % 2 == 1)
        {
            i = -i;
        }
        sum += i;

       cout << sum << endl;
    }
    return 0;
}*/
#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if(n % 2 == 0)
        cout << n/2;
    else
        cout << -(n+1)/2;

    return 0;
}