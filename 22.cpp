#include<iostream>
using namespace std;
int main()
/*{
    string a;
    int n;
   cin >> a;
    for ( int i = 0 ; i < n ; i++)
    {
    if ( a[i] == '7'  && a[i] == '4')
{
    cout << "Yes";
}
else{
    cout << " No";
}


    }
    return 0;
}*/

{
    string a;
    cin >> a;

    bool lucky = true;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != '4' && a[i] != '7')
        {
            lucky = false;
        }
    }

    if (lucky)
        cout << "YES";
    else
        cout << "NO";

    return 0;

}