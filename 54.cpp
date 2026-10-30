#include<iostream>
using namespace  std;
int main()
{
    int n;
    cin >> n;
    int largest = 0;
    int a[10][10];
    
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0 ; j < n ; j++)
        {
           
           if ( a[i][j] > largest) 
           {
            largest = a[i][j];
           }
        }
    }
    cout << largest;
    return 0;
}