int check(int n){
    for (int i = 1; i <= n; i++){
        if (i * i ==n ) return 1;
    }
    return 0;
}

int sum_all_square(int n){
    int res = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0 && check(i)) res +=i;
    }
    return res;
}
