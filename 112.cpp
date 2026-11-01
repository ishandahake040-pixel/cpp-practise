
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[10], b[10];
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for(int i = 0; i < n; i++)
        {
            if(a[i] > b[i])
            {
                count += a[i] - b[i];
            }
        }

        cout << count + 1 << endl;
    }

    return 0;
}
// definetly not