#include<iostream>
using namespace std;
int main() {
    int n, a;
    cin >> n;
    int num[n];
    for (int i=0; i<n; i++) {
        cin >> a;
        num[n-i-1] = a;
    }
    for (int j=0; j<n; j++) {
        if (j == n-1) {
            cout << num[j] << endl;
        } else {
            cout << num[j] << " ";
        }
    }
    return 0;
}