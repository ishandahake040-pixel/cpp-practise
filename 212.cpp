#include<iostream>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--)
{
    int a , b , c;
    cin >> a >> b >> c;
    if ( a +  b == c)
    {
        cout << "Yes" << endl;
    }
    else if ( c + b == a)
    {
        cout << "Yes"<< endl;
    }
    else if ( c + a == b)
    {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}return 0 ;
}

