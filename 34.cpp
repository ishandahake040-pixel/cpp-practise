#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for ( int i = 0 ; i < n  ; i++)
    {
        string name;
        int before , after;
        cin >> name >> before >> after;
        if ( before >= 2400 && after > before)
        {
            cout << " Yes ";
            return  0;
        }
    }
    cout << "NO";
    return 0;
}
