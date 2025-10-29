#include <bits/stdc++.h>
using namespace std;

int check(int n){
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int n; cin >> n;
    int d = 0;
    for (int i = 2; i < n - 2; i++){
        if (check(i) && check(i + 2)) printf("%d, %d\n", i, i + 2), ++d;
    }
    printf("Tong: %d cap so sinh doi < %d", d, n );
}
