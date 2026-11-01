#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b;
        cin >> a >> b;
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout << a << b << '\n';
    }
    return 0;
}