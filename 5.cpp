/*#include<iostream>
using namespace std;
int main()
{
    int n , m;
    char grid[100][100];
  for ( int i = 0 ; i < n ; i++)
  {
    for ( int j = 0 ; j < m ; j++){
        cin >> grid[i][j];
    }
  }
  for( int i = 0 ; i < n ; i++)
  {
    for ( int j = 0 ; j < m ; j++)
    {
        if ( grid[i][j] == 'X')
        {
            cout << i  << " " << j << endl;
            return 0;
        }
    }
  }
}*/
#include<iostream>
using namespace std;
int main()
{
    int m , n;
  
    char grid[100][100];
    for ( int i = 0 ; i < n ; i++)
    {
        for ( int j = 0 ; j < m ; j++)
        {
            cin  >> grid[i][j];
        }
        
    }
    for ( int i = 0 ; i < n ; i++)
    {
        for ( int j = 0 ;  j < m ; j++)
        {
            if ( grid[i][j] == 'X')
            {
            
                return 0;
            }
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char grid[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'X') {
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }

    return 0;
}