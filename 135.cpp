#include<iostream>

using namespace std;
int main()
{
    int t;
    cin >>  t;
    while(t--)
    {
        int n;
        cin >> n;
      
        int a[100];
      
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i]; 
            int small = a[0];
            if ( a[i] < small)
            {
                small = a[i];
            }
        
           
      
        
             cout << small - 1 << endl;
        }
    }
    return 0;
}
