#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;
int main() {
    char chk;
    while(1){
        scanf("%c", &chk);
        if (isalpha(chk)){
            if (islower(chk)){
                printf("%c", toupper(chk));
            } else {
                printf("%c", tolower(chk));
            }
        } else {
            printf("%c", chk);
        }
        if (chk == '\n') break;
    }
    return 0;
}