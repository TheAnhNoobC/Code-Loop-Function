#include <bits/stdc++.h>
using namespace std;

double cal(int n){
    double res = 0;
    for (int i = 1; i <= n; i++){
        res += (double)pow(-1, i) / (2 * i + 1);
    }
    return 4 * (1 + res);
}

int main(){
    int n; cin >> n;
    cout << cal(n);
}
