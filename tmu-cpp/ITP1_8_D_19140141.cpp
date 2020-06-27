#include<iostream>
using namespace std;
int main() {
    string s, p;
    int last, chk = 1;
    cin >> s >> p;
    s = s+s;
    for (int i=0; i<s.size(); i++){
        last = i + p.size() - 1;
        if (last >= s.size()) break;
        if (s.substr(i, p.size()) == p){
            cout << "Yes" << endl;
            chk--;
            break;
        }
    }
    if (chk) cout << "No" << endl;
    return 0;
}