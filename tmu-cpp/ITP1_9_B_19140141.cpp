#include<iostream>
#include<string>
using namespace std;
int main() {
    string s, m, first, second;
    int shuffle_cnt, place;
    while (1){
        cin >> s;
        if (s == "-"){
            break;
        } else {
            cin >> shuffle_cnt;
            for (int i=0; i<shuffle_cnt; i++){
                cin >> place;
                m = s;
                first = m.substr(place, m.size()-place);
                second = m.substr(0, place);
                s = first + second;
            }
            cout << s << endl;
        }
    }
    return 0;
}