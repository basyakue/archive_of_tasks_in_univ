#include<iostream>
#include <iomanip>
using namespace std;
int main() {
    int a, b, d, f;
    double a_d, b_d, r;
    cin >> a >> b;
    a_d = a; b_d = b;
    d = a/b; f = a%b; r = a_d/b_d;
    cout << d << " " << f << " " << fixed << setprecision(15) << r << endl;
    return 0;
}