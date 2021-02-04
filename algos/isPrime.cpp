#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    for(int a=2; a <= sqrt(n); a++) {
        if(n % a == 0)  return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n) {
        cout << n << (isPrime(n) ? " is prime" : " is not prime") << endl;
    }
    return 0;
}