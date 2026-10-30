#include<iostream>
using namespace std;
int main()
{
    int count = 0;
    int n , k;
    cin >> n >> k;
    for ( int i = 0; i < n ; i++)
    {
        // he should reach before midnight so 
        // have to leave early k minutes ago 
        //problem n is the hardest and 1st is easiest so 
        // n will take longest time and every times is de
        //denoted by 5*i, 
        if ( 240 - 5*i*n > k )
        {
          count++;
        }
        else if ( 240 - 5*i*n == k)
        {
        count++; 
        }
        cout << count;
    }
}