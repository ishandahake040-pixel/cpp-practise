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

        int a;
        int count = 0;
        int max = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a;

            if(a == 0)
            {
                count++;

                if(count > max)
                {
                    max = count;
                }
            }
            else
            {
                count = 0;
            }
        }

        cout << max << endl;
    }

    return 0;
}