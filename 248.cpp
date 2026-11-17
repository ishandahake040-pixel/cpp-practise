#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[100];

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        int x = a[i];
        int lucky = 0;

        while(x > 0)
        {
            int digit = x % 10;

            if(digit == 4 || digit == 7)
                lucky++;

            x = x / 10;
        }

        if(lucky <= k)
            count++;
    }

    cout << count << endl;
    return 0;
}
