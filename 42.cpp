#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string a;
    cin >> a;
if ( a[0] >= '97' && a[0] <= '122')
{
     a[0] = toupper(a[0]);
}
cout << a;

}