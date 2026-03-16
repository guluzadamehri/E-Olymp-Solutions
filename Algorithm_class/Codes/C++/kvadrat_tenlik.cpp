#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double d = b*b - 4*a*c;
    if (d < 0) cout << "Kok yoxdur" << endl;
    else if (d == 0) cout << "Bir kok: " << -b/(2*a) << endl;
    else {
        double x1 = (-b - sqrt(d))/(2*a);
        double x2 = (-b + sqrt(d))/(2*a);
        cout << "Kokler: " << x1 << " " << x2 << endl;
    }
    return 0;
}
