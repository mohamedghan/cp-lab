#include <bits/stdc++.h>

using namespace std;
//init
int a[10] = {0, 1, -5, 2, 3 ,5 , 7, -3, 4 ,6}, l=1 ,r=1;
//init

int maxsum(int n) {
    int sum = 0, ans=a[1];
    for(int i=1;i<=n;i++) {
        sum += a[i];
        if (sum > ans) {
            ans = sum;
            r=i;
        }
        if (sum < 0) {
            sum = 0;
            l=i+1;
        } 
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    n=9;
    cout << maxsum(n) << " " << l << " - " << r;
    return 0;
}