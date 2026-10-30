/*#include<iostream>
using namespace std;
int main()
{
    string cells;
    int count =  0;
    int n;
    cin >> n;
    int C ;
    cin >> C ;

    for ( int i = 0 ; i < n ; i++)
    {
       if ( cells[i] == C)
       {
        count++;
       }
       else{
        return ;
       }
    }
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string cells[100];

    for (int i = 0; i < n; i++)
    {
        cin >> cells[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (cells[i][j] == 'C')
            {
                // count C's in the same row
                for (int k = j + 1; k < n; k++)
                {
                    if (cells[i][k] == 'C')
                        count++;
                }

                // count C's in the same column
                for (int k = i + 1; k < n; k++)
                {
                    if (cells[k][j] == 'C')
                        count++;
                }
            }
        }
    }

    cout << count;

    return 0;
}