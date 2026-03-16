#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int say = 0, eded = 1;
    while (say < n) {
        eded++;
        bool sadedir = true;
        for (int i = 2; i * i <= eded; i++) {
            if (eded % i == 0) { sadedir = false; break; }
        }
        if (sadedir) say++;
    }
    cout << eded << endl;
    return 0;
}
