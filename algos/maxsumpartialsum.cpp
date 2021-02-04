#include <bits/stdc++.h>

using namespace std;

int a[6] = {0, 1 , -9, 2, 5, 6};

int maxsum(int n) {
    int s[n+1], minS = 0, ans=a[1];
    s[1] = a[1];
    for(int i=2;i<=n;i++)
        s[i] = s[i-1] + a[i];
    for(int i=1;i<=n;i++) {
        if(s[i] - minS > ans)
            ans = s[i] - minS;
        if(s[i] < minS)
            minS = s[i];
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n=5;
    cout << maxsum(n);
    return 0;
}