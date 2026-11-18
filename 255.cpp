#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int arr[26];

        for(int i = 0; i < 26; i++)
        {
            arr[i] = -1;
        }

        bool flag = true;

        for(int i = 0; i < n; i++)
        {
            int x = s[i] - 'a';

            if(arr[x] == -1)
            {
                arr[x] = i % 2;
            }
            else if(arr[x] != i % 2)
            {
                flag = false;
                break;
            }
        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
