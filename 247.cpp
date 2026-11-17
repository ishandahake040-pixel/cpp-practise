
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[1000];
    int chest = 0, biceps = 0, back = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(i % 3 == 0)
            chest += a[i];

        else if(i % 3 == 1)
            biceps += a[i];

        else
            back += a[i];
    }

    if(chest > biceps && chest > back)
        cout << "chest";

    else if(biceps > chest && biceps > back)
        cout << "biceps";

    else
        cout << "back";
        return 0;
}
