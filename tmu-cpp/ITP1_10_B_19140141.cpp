#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
    double a, b, c, s, l, h, PI = acos(-1.0);
    cin >> a >> b >> c;
    s = a*b*sin(c*PI/180.0)/2.0;
    l = a+b+(sqrt(a*a+b*b-2*a*b*cos(c*PI/180.0)));
    h = b*sin(c*PI/180.0);
    cout << fixed << setprecision(15) << s << endl << l << endl << h <<endl;
    return 0;
}