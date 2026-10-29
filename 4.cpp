
#include <iostream>

int main() {
    int m, n;
    int count = 0;

  std ::  cin >> m >> n;

    for (int a = 0; a <= 100; a++) {
        for (int b = 0; b <= 100; b++) {

            if (a * a + b == n && a + b * b == m) {
                count++;
            }
        }

  std::  cout << count;

    return 0;
}