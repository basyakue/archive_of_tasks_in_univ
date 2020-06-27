#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
    int n;
    while (1){
        double sum = 0.0, m, aa = 0.0;
        cin >> n;
        if (n == 0) break;
        int S[n];
        for (int i=0; i<n; i++){
            cin >> S[i];
            sum += S[i];
        }
        m = sum/n;
        for (int j=0; j<n; j++){
            aa += (S[j]-m)*(S[j]-m);
        }
        aa = aa/n;
        cout << fixed << setprecision(15) << sqrt(aa) << endl;

    }
    return 0;
}