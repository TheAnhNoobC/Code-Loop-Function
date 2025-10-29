#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;
    int res = 0;
    for (int i = 1; i <= n; i++){
        res += (a++) * (b++);
    }
    cout << res;
}
