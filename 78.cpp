#include<iostream>
using namespace std;
int main()
{
    int round = 0;
    int t;
    cin >> t;
    int a , b ,c;
    cin >> a >> b >> c;
    while ( a == b || a == c || b == c)
{
   break;
}

 if ( a > b > c )
{
    a = a - 1;
     c = c + 1;
     round ++;
}
else if ( a < b < c)
{
    a = a + 1;
    c = c - 1;
    round ++;
}
else if ( a < c < b)
{
    a = a + 1;
    b = b - 1;
    round ++;
}
else if ( a > b > c)
{
 a = a - 1;
 c = c + 1;
 round ++;
}
else if ( c < a < b)
{
    c = c + 1;
    b = b - 1;
    round ++;
}
else if ( b < a < c)
{
    b = b + 1;
    c = c - 1;
    round ++;

}

return 0;

}