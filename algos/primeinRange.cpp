#include <bits/stdc++.h>

using namespace std;
//init
bool isPrime[1000001], n;
//init

void PrimesinRange(int limit) {
    memset(isPrime, true, sizeof isPrime);
    isPrime[1] = false;
    for(int i=2; i <= limit/2; i++)
        if (isPrime[i])
            for (int j = i * 2; j <= limit; j += i)
                isPrime[j] = false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int limit;
    cin >> limit;
    PrimesinRange(limit);
    int c = 0, nb=0;
    for (int i=1;i<=limit;i++) {
        if (isPrime[i]) {
            cout << (i < 10 ? " " : "") << i << "     ";
            c++;
            nb++;
        } 
        if(c == 8) {
            c = 0;
            cout << "\n";
        }
    }
    cout << "\n" << "there is " << nb << " prime numbers less than " << limit ;
    return 0;
}