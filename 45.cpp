#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    vector < string > s;
  

    for ( int i = 0 ; i < 100 ; i++)
    {
      if ( s[i] > s[i+1] )
      {
       s.push_back(s[i]);
        count++;
      }
      
    }
    cout << count;
  
    
}
