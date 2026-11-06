#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int sum = a + b + c;
        int count = (n / sum) * 3;

        int rem = n % sum;

        if(rem > 0)
        {
            count++;

            if(rem > a)
            {
                count++;

                if(rem > a + b)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}