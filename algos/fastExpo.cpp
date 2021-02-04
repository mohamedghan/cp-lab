#include <bits/stdc++.h>

using namespace std;
//init
bool isPrime[1000001], n;
//init

int fastexpo(int n, long long e, int mod) {
    if (e == 0) return 1;
    if(e % 2 == 0)
        return fastexpo((1LL * n * n) % mod, n/2, mod);
    
    return (1LL * n * fastexpo(n, e-1, mod)) % mod;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, e, mod;
    while(cin >> n >> e >> mod) {
        cout << fastexpo(n, e, mod) << endl;;
    }
return 0;
}