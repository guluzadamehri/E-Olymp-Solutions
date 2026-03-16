#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t[3];
    cin >> t[0] >> t[1] >> t[2];
    sort(t, t + 3);
    if (t[0]*t[0] + t[1]*t[1] == t[2]*t[2]) cout << "Beli" << endl;
    else cout << "Xeyr" << endl;
    return 0;
}
