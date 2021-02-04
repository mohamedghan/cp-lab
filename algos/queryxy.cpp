#include <bits/stdc++.h>

using namespace std;
//init
int a[11] = {0,1,-2,10,5,8,9,-12,30,36}, s[11];
//init

void buildpartialsumarray(int n) {
    s[1] = a[1];
    for(int i=2;i<=n;i++)
        s[i] = s[i-1] + a[i];
}

int query(int x, int y) {
    return s[y] - s[x-1];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x,y;
    cin >> n >> x >> y;
    buildpartialsumarray(n);
    cout << query(x, y);
    return 0;
} 