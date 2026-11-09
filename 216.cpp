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

        int s[100];

        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        for(int i = 0; i < n; i++)
        {
            int max = 0;

            for(int j = 0; j < n; j++)
            {
                if(j != i && s[j] > max)
                {
                    max = s[j];
                }
            }

            cout << s[i] - max << " ";
        }

        cout << endl;
    }

    return 0;
}