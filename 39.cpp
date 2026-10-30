#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string a;
    cin >> a;
    int smallest = 0;
    for ( int i = 0 ; i < 1000 ; i++)
    {
      
      if ( a[i] - a[ i + 1] < smallest)
      {
        a[i] - a[ i + 1] = smallest;
      }
    }
}