#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 4*n;

    for(int i = 1; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            int a = i;
            int b = n/i;

            int perimeter = 2*(a+b);

            if(perimeter < ans)
            {
                ans = perimeter;
            }
        }
    }

    cout << ans << endl;

    return 0;
}