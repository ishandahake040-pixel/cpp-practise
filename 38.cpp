#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    
    for (int i = 1; i <= 10; i++) {
        int price = i * k;

        if (price % 10 == 0 || price % 10 == r) {
        cout << i;
            break;
        }
        }

    return 0;
}
