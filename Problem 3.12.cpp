int Input(){
    int x; cin >> x;
    return x;
}

int sum_even_divisor(int n){
    int res = 0;
    for (int i = 2; i <= n; i++){
        if (i % 2 == 0 && n % i == 0) res += i;
    }
    return res == 0 ? -1 : res;
}
