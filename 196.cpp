#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[100];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n, greater<int>());

    int gb = 0;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        gb += a[i];
        count++;

        if(gb >= m)
        {
            cout << count << endl;
            break;
        }
    }

    return 0;
}