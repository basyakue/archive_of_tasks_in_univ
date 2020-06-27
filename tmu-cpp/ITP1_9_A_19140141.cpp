#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;
int main() {
    string w, t;
    int ans = 0;
    cin >> w;
    for (int i=0; i<w.size(); i++){
        w[i] = toupper(w[i]);
    }
    while (1){
        cin >> t;
        if (t == "END_OF_TEXT"){
            break;
        } else {
            for (int j=0; j<t.size(); j++){
                t[j] = toupper(t[j]);
            }
            if (t == w) ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}