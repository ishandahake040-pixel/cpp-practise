#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    int m = max(Y, W);

    int favorable = 7 - m;
    int total = 6;
    
    int g = gcd(favorable, total);

    cout << favorable / g << "/" << total / g;

    return 0;
}    
