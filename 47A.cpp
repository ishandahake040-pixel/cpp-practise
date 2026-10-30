/*#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int root = sqrt(n);
    if( root * root == n)
    {
        cout << " Yes";
    }
    else{
        cout << " No";
    }
    return 0;
}*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 8 * n + 1;
    int root = sqrt(x);

    if (root * root == x)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}