
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        int zero = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(a[i] == 0)
            {
                zero++;
            }
        }

        int count = 0;

        for(int i = 0; i < zero; i++)
        {
            if(a[i] == 1)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
