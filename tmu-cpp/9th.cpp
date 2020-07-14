#include<iostream>
#include<cmath>
using namespace std;
//二次元ベクトル
class eiki{
    public:
        double x, y;
        eiki operator = (eiki r){
            return (*this);
        }
        eiki operator+(eiki r1){
            eiki a = eiki(0, 0);
            a.x = ((*this).x + r1.x);
            a.y = ((*this).y + r1.y);
            return a;
        }
        eiki operator-(eiki r2){
            eiki b = eiki(0, 0);
            b.x = ((*this).x - r2.x);
            b.y = ((*this).y - r2.y);
            return b;
        }
        eiki(double x, double y){
            (*this).x = x;
            (*this).x = y;
        }
        double len(eiki r3){
            return sqrt(((*this).x - r3.x)*((*this).x - r3.x) + ((*this).y - r3.y)*((*this).y - r3.y));
        }
};
int main() {
    double x, y, r, x_i, y_i;
    int n;
    cin >> x >> y >> r >> n;
    for (int i=0; i<n; i++){
        cin >> x_i >> y_i;
        if (sqrt((x_i - x)*(x_i - x) + (y_i - y)*(y_i - y)) < r) cout << "true" << endl;
        else cout << "false" << endl;
    }
    return 0;
}
//g++ kadai.cpp -O3; diff <(./a.out < 9th.in) <(cat 9th.ans)
//soetaeikinoMacBook-Air:tmu-cpp soetaeiki$ g++ 9th.cpp -O3; diff <(./a.out < 9th.in) <(cat 9th.ans)
//soetaeikinoMacBook-Air:tmu-cpp soetaeiki$
//クラス使って上手く実装できなくて逃げました。ごめんなさい。