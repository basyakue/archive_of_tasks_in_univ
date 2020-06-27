#include<iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int A[n][m], B[m], ans[n];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> A[i][j];
        }
    }
    for (int k=0; k<m; k++){
        cin >> B[k];
    }
    for (int i=0; i<n; i++){
        ans[i] = 0;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            ans[i] += A[i][j] * B[j];
        }
        cout << ans[i] << endl;
    }
    return 0;
}