#include <bits/stdc++.h>

using namespace std;

int a[11] = {0,3,7,1,4,2,5,3,8,10,9}, frq[1000];

int longest(int n) {
    int ans = 1;
    for(int left=1;left<=n;left++) {
        int min,max;
        min=max=a[left];
        memset(frq, 0, sizeof frq);
        for(int right=left; right <= n; right++) {
            min = a[right] < min ? a[right] : min;
            max = a[right] > max ? a[right] : max;
            if(frq[a[right]] != 0) break;
            frq[a[right]] += 1;
            if (max - min == right - left && max - min > ans - 1) ans = max - min + 1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n=10;
    cout << longest(n);
    return 0;
}