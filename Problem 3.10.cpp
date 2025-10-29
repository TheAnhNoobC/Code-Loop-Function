#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
    if (n <= 1) return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main(){
    int n; cin >> n;
    if (n >= 1 && n <= 30) cout << fibo(n);
    else printf("So %d khong nam trong khoang [1,30].", n);
}
