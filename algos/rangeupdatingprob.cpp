#include <bits/stdc++.h>

using namespace std;
//init
int a[11] = {0,1,-2,10,5,8,9,-12,30,36}, b[11], s[11];
//init

void update(int x,int y,int val) {
    b[x] += val;
    b[y+1] -= val;   
}

void buildf(int n) {
    for (int i=1;i<=n;i++) {
        s[i] = s[i-1] + b[i];
        a[i] += s[i];
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x,y, val;
    n=9;
    while(cin >> x && cin >> y && cin >> val) {
        update(x, y, val);
    }
    buildf(n);
    for (int i=1;i<=n;i++) cout << a[i] << " ";
    return 0;
} 