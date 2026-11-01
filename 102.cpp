
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, y, r;
        cin >> n >> y >> r;

        int k = y / 2;
        cout << min(n, k + r) << endl;
    }
}
