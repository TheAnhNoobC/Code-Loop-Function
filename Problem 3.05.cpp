#include <bits/stdc++.h>
using namespace std;

double cal1(int n, int x){
    double res = 0;
    for (int i = 1; i <= n; i++){
        res += pow(x, i);
    }
    return 1 + res;
}

double cal2(int n, int x){
    double res = 0;
    for (int i = 1; i <= n; i++){
        res += pow(x, 2 * i);
    }
    return 1 + res;
}

long long giaithua(int n){
    long long res = 1;
    for (int i = 2; i <= n; i++){
        res *= i;
    }
    return res;
}

double cal3(int n, int x){
    double res = 0;
    for (int i = 1; i <= n; i++){
        res += pow(x, i) / giaithua(i);
    }
    return 1 + res;
}

int main(){
    int n, x; cin >> n >> x;
    cout << cal1(n, x) << endl;
    cout << endl;
    cout << cal2(n, x) << endl;
    cout << endl;
    cout << cal3(n, x) << endl;
}
