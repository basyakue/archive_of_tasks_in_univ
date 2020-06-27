#include<iostream>
using namespace std;
int main() {
    while (1){
        string n;
        int ans = 0;
        cin >> n;
        if (n == "0"){
            break;
        } else {
            for (int i=0; i<n.size(); i++){
                ans += (n[i] - '0');
                //cout << ans << endl;
            }
            cout << ans << endl;
        }
    }
    return 0;
}