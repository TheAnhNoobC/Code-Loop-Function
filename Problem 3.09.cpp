#include <bits/stdc++.h>
using namespace std;

int check(int n){
    if (n < 2) return -1;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int n; cin >> n;
    cout << check(n);
}
