#include<iostream>
using namespace std;

int main()
{
    int n, S;
    cin >> n >> S;

    int count = S / n;

    if(S % n != 0)
    {
        count++;
    }

    cout << count;

    return 0;
}