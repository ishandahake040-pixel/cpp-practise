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

        int a[100];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool flag = true;
        

        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(a[i] > a[j])
                {
                    flag = false;
                }
            }
        }

        if(k > 1 || flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}