#include <bits/stdc++.h>

using namespace std;
//init
int fact[100], expo[100], len;
//init

void primeFact(int n) {
    len=0;
    memset(fact, 0, sizeof fact);
    memset(expo, 0, sizeof fact);
    int d=2;
    while(n > 1 && d*d <= n) {
        int k = 0;
        while(n % d == 0) {
            n /= d;
            k++;
        }
        if(k > 0) {
            len++;
            expo[len] = k;
            fact[len] = d;
        }
        d++;
    }
    if (n > 1) {
            len++;
            expo[len] = 1;
            fact[len] = n;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n) {
        primeFact(n);
        cout << n << " = ";
        for(int i=1;i<=len;i++) {
            cout << fact[i] << "^(" << expo[i] << ")";
            if(i != len) cout << " × ";
        }
        cout << "\n";
    }
    return 0;
}