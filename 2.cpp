#include <iostream>
#include <set>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    set<int> colors = {a, b, c, d};

    cout << 4 - colors.size();

    return 0;
}


