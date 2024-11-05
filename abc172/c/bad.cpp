#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

bool isOK(int index, ll k , vector<ll> x) {
    return x[index] <= k;
}

int binary_search(int right, int left, ll k, vector<ll> x) {
    int ok = right, ng = left;
    while(abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if (isOK(mid, k, x)) ok = mid;
        else ng = mid;
    }
    return ok;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    vector<ll> sum_a(n+1, 0), sum_b(m+1, 0);
    rep(i, n) sum_a[i+1] = sum_a[i] + a[i];
    rep(i, m) sum_b[i+1] = sum_b[i] + b[i];

    int ans = 0;
    rep(i, n+1) {
        ll time_a = sum_a[i], time_b = k - time_a;
        if(time_b < 0) continue;
        int read_b = binary_search(0, m+1, time_b, sum_b);
        //cout << " read_a: " << i << " read_b: " << read_b << endl;
        ans = max(ans, i + read_b);
    }
    cout << ans << endl;
    return 0;
}