#include<iostream>
using namespace std;
int main() {
    int rooms[5][4][11], n;
    for (int i=1; i<=4; i++){
        for (int j=1; j<=3; j++){
            for (int k=1; k <= 10; k++){
                rooms[i][j][k] = 0;
            }
        }
    }
    cin >> n;
    for (int i=0; i<n; i++){
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        rooms[b][f][r] += v;
    }

    for (int f=1; f<=4; f++){
        if (f > 1){
            cout << "####################" << endl;
        }
        for (int b=1; b<=3; b++){
            for (int r=1; r<=10; r++){
                cout << " " << rooms[f][b][r];
            }
            cout << endl;
        }
    }
    return 0;
}