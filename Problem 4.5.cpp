int TongChuSo(int n){
    int res = 0;
    while (n){
        res += n% 10;
        n /= 10;
    }
    return res;
}

void input(int &n){
    std::cin >> n;
}
