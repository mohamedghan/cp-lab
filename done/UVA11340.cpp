// PRESET
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> llll;

#define all(v) (v).begin(), v.end()
#define INF (int)1e9 
#define EPS 1e-9 
#define bitcount __builtin_popcount
#define gcd __gcd
#define pb push_back
#define input(n) n; cin >> n
#define every(n) n; while (cin >> n)
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

int main() {
    cout << setprecision(2) << fixed;
    case(T) {
        map<char, int> table;
        int input(k);
        FOR(i,1,k) {
            char input(tmp);
            int input(value);
            table[tmp] = value;
        }
        int ans = 0;
        int input(m);
        cin.ignore();
        FOR(i,1,m) {
            string phrase;
            getline(cin, phrase);
            for(auto c:phrase) ans += table[c];
        }
        cout << ans/100.0 << "$\n";
    }
}