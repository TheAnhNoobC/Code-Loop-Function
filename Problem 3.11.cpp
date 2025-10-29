#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    if (a > b) swap(a, b);

    int maxx = 0;

    for (int i = 1; i <= sqrt(a); i++){
        if (a % i == 0){
            if (b % i == 0) maxx = max(maxx, i);
            if (a % (a / i) == 0 && i != a / i) {
                if (b % (a / i) == 0) maxx = max(maxx, a / i);
            }
        }
    }

    cout << maxx;
}
