#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    while (true) {
        int stones = gcd(a, n);

        if (stones > n) {
            cout << 1;
            break;
        }

        n -= stones;

        stones = gcd(b, n);

        if (stones > n) {
            cout << 0;
            break;
        }

        n -= stones;
    }

    return 0;
}