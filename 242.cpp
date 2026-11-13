#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int b, p, f;
        cin >> b >> p >> f;

        int h, c;
        cin >> h >> c;

        b = b / 2;

        if(h < c)
        {
            swap(h, c);
            swap(p, f);
        }

        int count = min(b, p);
        b -= count;
        int sum = count * h;

        count = min(b, f);
        sum += count * c;

        cout << sum << endl;
    }

    return 0;
}