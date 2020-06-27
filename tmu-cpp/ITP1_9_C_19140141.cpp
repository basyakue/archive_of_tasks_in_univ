#include<iostream>
#include<string>
using namespace std;
int main() {
    int cnt, taro=0, hanako=0;
    string taro_s, hanako_s;
    cin >> cnt;
    for (int i=0; i<cnt; i++){
        cin >> taro_s >> hanako_s;
        if (taro_s == hanako_s){
            taro++;
            hanako++;
        } else if (taro_s > hanako_s){
            taro += 3;
        } else {
            hanako += 3;
        }
    }
    cout << taro << " " << hanako << endl;
    return 0;
}