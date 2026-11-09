
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

        int a[100], b[100];

        int evenA = 0, oddA = 0;
        int evenB = 0, oddB = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(a[i] % 2 == 0)
                evenA++;
            else
                oddA++;
        }

        for(int i = 0; i < n; i++)
        {
            cin >> b[i];

            if(b[i] % 2 == 0)
                evenB++;
            else
                oddB++;
        }

        if(k % 2 == 0)
        {
            if(oddA >= oddB)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if(evenA >= evenB)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
