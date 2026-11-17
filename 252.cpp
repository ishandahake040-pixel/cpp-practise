
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    string stones[6] = {"purple", "green", "blue", "orange", "red", "yellow"};
    string names[6] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};

    bool found[6] = {false};

    for(int i = 0; i < n; i++)
    {
        cin >> s;

        for(int j = 0; j < 6; j++)
        {
            if(s == stones[j])
            {
                found[j] = true;
            }
        }
    }

    cout << 6 - n << endl;

    for(int i = 0; i < 6; i++)
    {
        if(!found[i])
        {
            cout << names[i] << endl;
        }
    }

    return 0;
}
