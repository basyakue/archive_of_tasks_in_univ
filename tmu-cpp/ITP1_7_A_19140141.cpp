#include<iostream>
using namespace std;
int main() {
    int m, f, r;
    while (1){
        cin >> m >> f >> r;
        char ans;
        if (m == -1 && f == -1 && r == -1){
            break;
        }
        if ( m == -1 || f == -1) {
            ans = 'F';
        } else if (m+f >= 80){
            ans = 'A';
        } else if (m+f >= 65){
            ans = 'B';
        } else if (m+f >= 50){
            ans = 'C';
        } else if (m+f >= 30 && r >= 50){
            ans = 'C';
        } else if (m+f >= 30 && r < 50){
            ans = 'D';
        } else if (m+f < 30) {
            ans = 'F';
        }
        cout << ans << endl;
    }
    return 0;
}