#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x1, y1, x2, y2 , x3, y3, x4, y4;

        cin >> x1 >> y1 >> x2 >> y2  >> x3 >> y3 >> x4 >> y4;

        int side = 0;

        if(x1 == x2)
        {
            side = y1 - y2;
        }
        else
        {
            side = x1 - x2;
        }

        cout << side * side << endl;
    }

    return 0;
}