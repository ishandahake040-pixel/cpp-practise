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

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int count = 0;

        for(int i = 0; i < a.size()-1; )
        {
            if((a[i] % 2 == 0 && a[i+1] % 2 == 0) ||
               (a[i] % 2 != 0 && a[i+1] % 2 != 0))
            {
                int k = a[i] * a[i+1];

                a.erase(a.begin() + i, a.begin() + i + 2);
                a.insert(a.begin() + i, k);

                count++;
            }
            else
            {
                i++;
            }
        }

        cout << count << endl;
    }

    return 0;
}