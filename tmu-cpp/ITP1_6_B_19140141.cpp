#include<iostream>
using namespace std;
int main() {
    bool cards[4][14];
    int n, num;
    char mark;
    for (int m=0; m<4; m++){
        for (int k=1; k<=13; k++){
            cards[m][k] = 0;
        }
    }
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> mark >> num;
        if (mark == 'S') cards[0][num] = 1;
        if (mark == 'H') cards[1][num] = 1;
        if (mark == 'C') cards[2][num] = 1;
        if (mark == 'D') cards[3][num] = 1;
    }
    for (int m=0; m<4; m++){
        for (int l=1; l<=13; l++){
            if (cards[m][l]) continue;
            if (m == 0) mark = 'S';
            if (m == 1) mark = 'H';
            if (m == 2) mark = 'C';
            if (m == 3) mark = 'D';
            cout << mark << " " << l << endl; 
        }
    }
    return 0;
}