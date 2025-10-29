#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >> n;
    long long res = 1;
    if (n % 2 == 0){
        for (int i = 2; i <= n; i += 2) res *= i;
    }
    else {
        for (int i = 1; i <= n; i+= 2) res *= i;
    }
    cout << res;
}
