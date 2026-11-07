#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int police = 0;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if(a == -1)
        {
            if(police > 0)
            {
                police--;
            }
            else
            {
                count++;
            }
        }
        else
        {
            police += a;
        }
    }

    cout << count << endl;

    return 0;
}