#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int ans = 0;

    if (a < b)
    {
        swap(a, b);
    }

    ans = b * 2;

    if (c > 0)
    {
        ans++;
        c--;
    }

    ans += min(a - b, c * 2);

    cout << ans << endl;

    return 0;
}
