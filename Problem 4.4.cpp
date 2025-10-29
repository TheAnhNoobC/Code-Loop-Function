int check(int n){
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int sum_common_prime(int a, int b){
    if (a > b) swap(a, b);

    long long res = 0;

    for (int i = 1; i <= sqrt(a); i++){
        if (a % i == 0){
            if (b % i == 0 && check(i)) res += i;
            if (a % (a / i) == 0 && i != a / i) {
                if (b % (a / i) == 0 && check(a / i)) res += a / i;
            }
        }
    }

    if (res == 0) return -1;
    else return res;
}
