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

        int count = 0;

        for(int i = 0; i < 2*n-1 && k > 0; i++)
        {
            int cells;

            if(i == 0)
                cells = n;
            else
                cells = n - (i+1)/2;

            k = k - cells;
            count++;
        }

        cout << count << endl;
    }

    return 0;
}