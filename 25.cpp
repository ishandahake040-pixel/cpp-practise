#include<iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int left = 0 , right = 0;
  for ( int  i = 0 ; i < n ; i++)
  {
    int x,y;
    cin >> x >> y;
    if ( x < 0)
    {
        left ++;
    }
    else
    {
        right++;
    }
    if ( left <= 1 || right <= 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
  }
  return 0;
}