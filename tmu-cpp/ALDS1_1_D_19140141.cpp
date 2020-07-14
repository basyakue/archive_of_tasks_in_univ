#include<iostream>
using namespace std;
int main() {
    int n, x, minv, maxv = -1000000000;
    cin >> n >> x;
    minv = x;
    for (int j=1; j<n; j++){
        cin >> x;
        maxv = max(maxv, x-minv);
        minv = min(minv, x);
    }
    cout << maxv << endl;
    return 0;
}