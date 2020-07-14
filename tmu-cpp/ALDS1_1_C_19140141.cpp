#include<iostream>
#include<cmath>
using namespace std;
int prime_serch(int x){
    int i;
    if (x == 2){
        return true;
    } else if (x < 2 || x%2 == 0){
        return false;
    } else {
        i = 3;
        while (i <= sqrt(x)){
            if (x%i == 0){
                return false;
            }
            i += 2;
        }
    }
    return true;
}
int main() {
    int n, x, ans = 0;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> x;
        if (prime_serch(x)) ans += 1;
    }
    cout << ans << endl;
    return 0;
}