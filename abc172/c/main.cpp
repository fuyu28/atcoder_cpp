#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

bool isOK(int index, int k , vector<int> b) {
    return b[index] <= k;
} 

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    vector<int> sum_a(n+1, 0), sum_b(m+1, 0);
    rep(i, n) sum_a[i+1] = sum_a[i] + a[i];
    rep(i, m) sum_b[i+1] = sum_b[i] + b[i];

    int max;
    rep(i, n) {
        if(k < sum_a[i+1]) {
            max = i;
        }
    }

    rep(i, max) {
        int time_a = sum_a[i+1], time_b = k - time_a;
        int ok = 0, ng = m+1;
        while(abs(ok - ng) > 1) {
            int mid = (ok + ng) / 2;
            if (isOK(mid, time_b, sum_b)) ok = mid;
            else ng = mid;
        }
    }
    return 0;
}