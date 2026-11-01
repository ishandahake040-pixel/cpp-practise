
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        long long gold = 0;
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            if(x >= k)
            {
                gold += x;
            }
            else if(x == 0 && gold > 0)
            {
                gold--;
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
