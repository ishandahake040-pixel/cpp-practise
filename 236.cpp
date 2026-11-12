#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        int A = max(b,c) + 1 - a;
        int B = max(a,c) + 1 - b;
        int C = max(a,b) + 1 - c;

     cout << max(0,A) << " " << max(B,0) << " " << max(C,0) << endl;
    }

    return 0;
}