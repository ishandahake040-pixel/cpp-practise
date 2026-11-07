#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , m;
        cin >> n >> m;
        int a[100];
        int av;
        int sum = 0;
        int count = 0;
        for ( int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            sum += a[i];
            while ( a[i] >= 0 && a[i] <= m && av == (sum)/2) 
            {
                a[i]++;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
