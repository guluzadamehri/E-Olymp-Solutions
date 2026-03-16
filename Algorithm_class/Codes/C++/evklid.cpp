#include <iostream>
using namespace std;
int main() {
    long long x, y, a, b;
    cin >> x >> y;
    a = x; b = y;
    while (b != 0) {
        long long qaliq = a % b;
        a = b;
        b = qaliq;
    }
    cout << a << " " << (x * y) / a << endl;
    return 0;
}
