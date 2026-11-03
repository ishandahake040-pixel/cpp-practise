#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long long A, count;

    for(int i = 0; i < N; i++)
    {
        cin >> A;

        if(A < 0)
        {
            A = -A;
        }

        if(i == 0 || A < count)
        {
            count = A;
        }
    }

    cout << count << endl;

    return 0;
}