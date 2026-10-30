#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k = n / 2;
    cout << k << endl;

    for (int i = 0; i < k; i++) {
        if (n % 2 == 1 && i == k - 1)
            cout << 3 << " ";
        else
            cout << 2 << " ";
    }

    return 0;
}