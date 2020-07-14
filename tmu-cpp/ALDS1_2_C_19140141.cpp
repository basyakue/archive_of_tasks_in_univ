#include<iostream>
using namespace std;
int main() {
    int n, minj;
    cin >> n;
    string A[n], B[n], state="Stable";
    for (int i=0; i<n; i++){
        cin >> A[i];
        B[i] = A[i];
    }
    for (int i=0; i<n; i++){
        for (int j=n-1; j>i; j--){
            if (A[j][1] < A[j-1][1]){
                swap(A[j],A[j-1]);
            }
        }
    }
    for (int i=0; i<n; i++){
        if (i == n-1){
            cout << A[i] << endl;
        } else {
            cout << A[i] << " ";
        }
    }
    cout << "Stable" << endl;
    for (int i=0; i<n; i++){
        minj = i;
        for (int j=i; j<n; j++){
            if (B[j][1] < B[minj][1]){
                minj = j;
            }
        }
        swap(B[i], B[minj]);
    }
    for (int i=0; i<n; i++){
        if (i == n-1){
            cout << B[i] << endl;
        } else {
            cout << B[i] << " ";
        }
        if (A[i] != B[i]) state="Not stable";
    }
    cout << state << endl;
    return 0;
}