
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int neg = 0;
        int zero = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x == -1)
            {
                neg++;
            }
            else if(x == 0)
            {
                zero++;
            }
        }

        int count = zero;

        if(neg % 2 == 1)
        {
            count += 2;
        }

        cout << count << endl;
    }

    return 0;
}
