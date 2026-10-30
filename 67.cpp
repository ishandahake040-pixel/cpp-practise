#include<iostream>
using namespace std;
int main(){
    int t , n ;
    cin >> t >> n;
    int sum = 0;
    for ( int i = 0 ; i < n  ; i++)
    {
        int a;
        cin >> a;
     sum += a;
    
    }
    if ( sum == 0)
    {
       cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;

} 