#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double num = 0;
    for ( int i = 0 ; i < n ; i++)
    {
        double p;
        cin >> p;
      
         num += p;
    }
    
    cout << num / n ;
    return 0;
}