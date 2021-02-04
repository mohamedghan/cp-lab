// PRESET
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

#define all(v) (v).begin(), v.end()
#define INF (int)1e9 
#define EPS 1e-9 
#define bitcount __builtin_popcount
#define gcd __gcd
#define pb push_back
#define input(n) n; cin >> n
#define case(t) input(t); while(t--)
#define FOR(i,a,b) for(int i=a;i<=b;i++) 
#define fill_table(t,n) FOR(i,1,n) cin >> t[i]
#define print_table(t,n) cout << "| "; FOR(i,1,n) cout << t[i] << " | "
#define FASTIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// \PRESET

int solve(int n, int x, int y) {
    if (n == 0)
        return 1;
    if(x <= 1<<(n-1)) {
        if (y <= 1<<(n-1))
            return solve(n-1, x, y); // 1
        return (1<<(2*n-2)) + solve(n-1, x, y - (1<<(n-1))); // 2
    }
    if (y <= 1<<(n-1))
        return (1<<(2*n-1)) + solve(n-1, x - (1<<(n-1)), y); // 3
    return 3*(1<<(2*n-2)) + solve(n-1,x - (1<<(n-1)),y - (1<<(n-1))); //4
}

int main() {
    FASTIO;
    int n,x,y;
    cin >> n >> x >> y;
    cout << solve(n,x,y);
    return 0;
}