#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    if (s.length() == 1) return 1;
    for (int i = 0; i <= s.length() / 2 - 1; i++){
        if (s[i] != s[s.length() - i - 1]) return 0;
    }
    return 1;
}

int main(){
    string s; cin >> s;
    check(s) ? cout << "true" : cout << "false";
}
