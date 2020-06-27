#include<iostream>
#include<string>
using namespace std;
int main() {
    string str, order, content, str_m;
    int cnt, a, b;
    cin >> str >> cnt;
    for (int i=0; i<cnt; i++){
        cin >> order >> a >> b;
        if (order == "replace"){
            cin >> content;
            str = str.replace(a, b-a+1, content);
        } else if (order == "reverse" && a != b){
            str_m = "";
            for (int j=0; j<str.size(); j++){
                if (a<=j && j<=b) str_m += str[b+a-j];
                else str_m += str[j];
            }
            str = str_m;
        } else if (order == "reverse" && a == b){
            continue;
        } else {
            for (int j=0; j<=(b-a); j++){
                if (j == b-a) cout << str[j+a] << endl;
                else cout << str[j+a];
            }
        }
    }
    return 0;
}