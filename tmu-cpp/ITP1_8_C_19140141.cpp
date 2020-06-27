#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;
int main() {
    int n[26] = {};
    char s;
    while (cin >> s){
        s = tolower(s);
        if (isalpha(s)){
            n[s - 'a']++;
        }
    }
    for (int i=0; i<26; i++){
        printf("%c : %d\n", i+'a', n[i]);
    }
    return 0;
}