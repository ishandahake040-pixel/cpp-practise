
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

        int a[200005];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int largest = 0;
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            if(a[i] > largest)
            {
                largest = a[i];
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}