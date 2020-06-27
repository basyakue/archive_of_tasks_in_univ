#include<iostream>
using namespace std;
int main() {
    int r, c, cell;
    cin >> r >> c;
    int cells[r+1][c+1];
    for (int i=0; i<=r; i++){
        for (int j=0; j<=c; j++){
            cells[i][j] = 0;
        }
    }
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cin >> cell;
            cells[i][j] += cell;
            cells[i][c] += cell;
            cells[r][j] += cell;
            cells[r][c] += cell;
        }
    }
    for (int i=0; i<=r; i++){
        for (int j=0; j<=c; j++){
            if (j < c) cout << cells[i][j] << " ";
            if (j == c) cout << cells[i][j] << endl;
        }
    }
    return 0;
}