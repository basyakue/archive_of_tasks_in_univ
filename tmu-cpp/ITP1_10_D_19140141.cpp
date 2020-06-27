#include<iostream>
#include<cmath>
#include<iomanip>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int X[n], Y[n];
    double d1=0.0, d2=0.0, d3=0.0, d4;
    for (int x=0; x<n; x++){
        cin >> X[x];
    }
    for (int y=0; y<n; y++){
        cin >> Y[y];
    }
    for (int i=0; i<n; i++){
        if (X[i] >= Y[i]){
            d1 += X[i] - Y[i];
            d2 += (X[i] - Y[i])*(X[i] - Y[i]);
            d3 += (X[i] - Y[i])*(X[i] - Y[i])*(X[i] - Y[i]);
        } else {
            d1 += Y[i] - X[i];
            d2 += (Y[i] - X[i])*(Y[i] - X[i]);
            d3 += (Y[i] - X[i])*(Y[i] - X[i])*(Y[i] - X[i]);
        }
        if (i == 0){
            if (X[i] >= Y[i]){
                d4 = X[i] - Y[i];
            } else {
                d4 = Y[i] - X[i];
            }
        } else if (d4 <= (X[i] - Y[i])){
            d4 = X[i] - Y[i];
        } else if (d4 <= (Y[i] - X[i])){
            d4 = Y[i] - X[i];
        } else {
            continue;
        }
    }
    d2 = sqrt(d2);
    d3 = pow(d3, 1.0/3.0);
    cout << fixed << setprecision(15) << d1 << endl << d2 << endl << d3 << endl << d4 << endl;
    return 0;
}