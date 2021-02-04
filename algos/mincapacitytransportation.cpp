#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
//init

//init

ll maxVal(int a[], int n) {
    ll ans = a[1];
    for(int i=2;i<=n;i++)
        ans = a[i] > ans ? a[i] : ans;
    return ans;
}

ll sumOf (int a[], int n) {
    ll sum = 0; 
    for(int i=1;i<=n;i++) 
        sum += a[i];
    return sum;
}

int numOfRides(int a[], int n, int k) {
    ll ans=1, sum = 0;
    for(ll i;i<=n ;i++) {
        if(sum + a[i] <= k) {
            sum += a[i];
        } else {
            sum = a[i];
            ans++;
        }
    }
    return ans;
}

ll bSearch(int a[], int n, int k) {
    ll left = maxVal(a,n), right = sumOf(a,n), ans = right;
    while(left <= right) {
        ll mid = (left+right)/2;
        if(numOfRides(a, n, mid) > k) {
            left = mid + 1;
        } else {
            ans = mid;
            right = mid-1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    return 0;
}