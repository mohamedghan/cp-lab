#include <bits/stdc++.h>

using namespace std;

int a[11] = {0,1,5,2,1,7,2,1,5,5,7}, frq[1000];

int slidingwindow(int n, int k) {
    int R, cnt=0;
    for(R = 1; R<=n;R++) {
        cnt += ++frq[a[R]] == 1;
        if (cnt > k) break;
    }
    if (cnt <= k) return n;
    cnt -= --frq[a[R]] == 0;
    R--;
    int ans = R;
    for(int L=2;L<=n;L++) {
        cnt -= --frq[a[L-1]] == 0;
        while (R < n) {
            R++;
            cnt += ++frq[a[R]] == 1;
            if (cnt > k) break;
        }
        if (cnt <= k) return max(ans, n-L+1);
        cnt -= --frq[a[R]] == 0;
        R--;
        ans = max(ans, R-L+1);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n=10,k;
    cin >> k;
    cout << slidingwindow(n, k);
    return 0;
}