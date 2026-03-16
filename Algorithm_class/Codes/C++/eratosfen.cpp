#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<bool> elek(n + 1, true);
    for (int p = 2; p <= n; p++) {
        if (elek[p]) {
            cout << p << " ";
            for (int i = p * p; i <= n; i += p) elek[i] = false;
        }
    }
    return 0;
}
