#include <cmath>
void input(int &a){
    cin >> a;
}

int input(){
    int a; cin >> a;
    return a;
}

int gcd(int a, int b){
    if (a > b) swap(a, b);

    int maxx = 0;

    for (int i = 1; i <= sqrt(a); i++){
        if (a % i == 0){
            if (b % i == 0) maxx = max(maxx, i);
            if (a % (a / i) == 0) {
                if (b % (a / i) == 0) maxx = max(maxx, a / i);
            }
        }
    }

    return maxx;
}
