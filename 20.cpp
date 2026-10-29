#include<iostream>
using namespace std;
int main()
{
    int n;
cin >> n;
int maximum = 0;
int current = 0;

for ( int i = 0 ; i < n ; i++)
{
int a, b;
cin >> a >> b;
current = current + b;
current = current - a;
}
if (current >  maximum)
{
 current = maximum;
}
cout  << current;
return 0; 

}