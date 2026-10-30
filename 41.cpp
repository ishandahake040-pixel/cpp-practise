#include<iostream>
using namespace std;
int main()
{
    int n;
    cin  >> n;
    string a;
    cin >> a;
    // the player can make several steps
    // in single step he can choose element of sequence 
    //also delete it
    int count = 0;
  
    for ( int i = 0 ; i < n ;i++)
    {
        for ( int k = 0  ; k < n ; k++)
        {
            for ( int j = 0 ; j < n ; j++)
            {
       if( ( a[k] == a[i] + 1 ) || ( a[j] == a[i] - 1))
       {
           count++;
       }
            }
}
}
    cout << count;

}
// wrong answer above for queshion 455A