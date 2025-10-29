#include <cmath>
using namespace std;

int TongUocChung(int a, int b){
    if (a > b) swap(a, b);

    int maxx = 0;

    for (int i = 1; i <= sqrt(a); i++){
        if (a % i == 0){
            if (b % i == 0) maxx += i;
            if (a % (a / i) == 0 && i != a / i) {
                if (b % (a / i) == 0) maxx += a / i;
            }
        }
    }
    
    return maxx;
}

void input(int &a){
    cin >> a;
}

int input(){
    int a; cin >> a;
    return a;
}
