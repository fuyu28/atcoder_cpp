#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

bool isOK(int index, int key, vector<int> a) {
    return a[index] >= key;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int ng = -1, ok = n;
    while (ok - ng > 1) {
        int mid = (ok + ng) / 2;
        if (isOK(mid, k, a)) ok = mid;
        else ng = mid;
    }
    if (ok == n) cout << -1 << endl;
    else cout << ok << endl;
    return 0;
}