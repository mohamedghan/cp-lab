// PRESET
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef pair<ll, ll> llll;

#define ge getenv
#define all(v) (v).begin(), v.end()
#define INF (int)1e9 
#define EPS 1e-9 
#define bitcount __builtin_popcount
#define gcd __gcd
#define pb push_back
#define input(n) n; cin >> n
#define every(n) int n; while (cin >> n)
#define case(t) int input(t); while(t--)
#define FOR(i,a,b)  for(int i=a;i<=b;i++) 
#define FORrev(i,a,b)  for(int i=a;i>=b;i--) 
#define fill_table(t,n) FOR(i,1,n) cin >> t[i]
#define fill_matrix(t, a, b) FOR(i,1,a) FOR(j,1,b) cin >> box[i][j];
#define print_table(t,n) cout << "| "; for(auto el: t) cout << el << " | "
#define print_matrix(m,a,b) FOR(i,1,a) { FOR(j,1,b) cout << m[i][j] << " "; cout << "\n"; }
#define FASTIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
const int dx[4] = {1,-1,0,0};
const int dy[4] = {0,0,1,-1};
// \PRESET


string solve(vi k, int n) {
    stack<int> station;
    int current=0;
    FOR(i,1,n) {
        station.push(i);
        while(!station.empty() && station.top() == k[current]) {
            station.pop(); current++;
        };
    }

    return (station.empty() ? "Yes": "No");
}

int main() {
    FASTIO;
    every(n) {
        if (n==0) break;
        vector<vi> v;
        bool stop=false;
        while (true) {
            vi tmp_v;
            FOR(i,1,n) {
                int tmp; cin >> tmp;
                if (tmp == 0) {
                    stop = true;
                    break;    
                }
                tmp_v.pb(tmp);
            }
            if(stop) break;
            v.pb(tmp_v);
        }
        for(auto k:v) {
            cout << solve(k,n) << "\n";
        }
        cout << "\n";
    }
    
    return 0;
}