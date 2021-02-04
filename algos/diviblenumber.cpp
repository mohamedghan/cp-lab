#include <bits/stdc++.h>

using namespace std;
//init
int frq[100000];
//init

void pigeonhole(int n) {
    int cur_rem = 0;
    memset(frq, 0, sizeof frq);
    for(int i=1; i<= n;i++) {
        cur_rem = (cur_rem * 10 + 1) % n;
        if(cur_rem == 0) {
            for(int j=1; j<=i;j++) cout << 1;
            return;
        }
        if(frq[cur_rem] != 0) {
            for(int j=1;j <= i-frq[cur_rem];j++) cout << 1;
            for(int j=1;j <= frq[cur_rem];j++) cout << 0;
            return;
        }
        frq[cur_rem] = i;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n) {
        pigeonhole(n);
        cout << "\n";
    }
return 0;
}