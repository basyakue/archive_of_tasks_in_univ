#include<iostream>
#include <iomanip>
using namespace std;
int main() {
    double r;
    cin >> r;
    double pi = 3.14159265358979323846;
    double a = r*r*pi;
    double b = 2.00000000*r*pi;
    std::cout << std::setprecision(100) << a << " " << b << endl;
    return 0;
}