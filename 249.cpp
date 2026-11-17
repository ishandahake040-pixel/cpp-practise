
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[1000];

    int max = 0, second = 0, index = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(a[i] > max)
        {
            second = max;
            max = a[i];
            index = i + 1;
        }
        else if(a[i] > second)
        {
            second = a[i];
        }
    }

    cout << index << " " << second;
    return 0;
}
