if (x <= 1) return x;
    int f0 = 0, f1 = 1, fn;
    for (int i = 2; i <= x; ++i) {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return fn;
}
