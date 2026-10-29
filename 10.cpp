#include<iostream>
using namespace std;
int main(){
int n , k , i;
int a[100];
int count = 0;
cin >> n >> k;
for ( int i = 0 ; i < n ; i++)
{
cin >> a[i];
}
if ( a[k] <= a[i] && a[i] > 0)
{
count ++;
}
cout <<count ;



    return 0;
}