#include <bits/stdc++.h>
using namespace std;

double cal1(int n){
    double res = 0;
    for (int i = 1; i <= n; i++){
        res += pow(i, i);
    }
    return res;
}

long long giaithua(int n){
    long long res = 1;
    for (int i = 2; i <= n; i++){
        res *= i;
    }
    return res;
}

double cal2(int n){
    double res = 0;
    for (int i = 1; i <= n; i++){
        res += giaithua(i);
    }
    return res;
}

double cal3(int n){
    double res = 0;
    int tong = 0;
    for (int i = 1; i <= n; i++){
        res += (double)1 / (tong  + i);
        tong += i;
    }
    return res;
}

int main(){
    int n, x; cin >> n;
    cout << cal1(n) << endl;
    cout << endl;
    cout << cal2(n) << endl;
    cout << endl;
    cout << cal3(n) << endl;
}
