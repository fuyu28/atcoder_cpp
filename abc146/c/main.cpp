#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int digit_cnt(int num) {
    int cnt = 0;
    while (num) {
        num /= 10;
        cnt++;
    }
    return cnt;
}

bool isOK(ll mid, ll a, ll b, ll x) {
    return a * mid + b * digit_cnt(mid) <= x;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    ll a, b, x;
    cin >> a >> b >> x;

    int ok = 0, ng = 1e9 + 1;
    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if (isOK(mid, a, b, x)) ok = mid;
        else ng = mid;
    }
    cout << ok << endl;
    return 0;
}