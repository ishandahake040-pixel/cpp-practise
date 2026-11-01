#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
      int n;
      cin >> n;
      int a[9];
      int count = 0;
      for ( int i = 0 ; i < n ; i++)
      {
        cin >> a[9];
        if ( a[i] == 0 || a[i] ==  3 || a[i] == 2 || a[i] == 5)

        {
            count++;
        }
    
      }
    }
    return 0;
    
}