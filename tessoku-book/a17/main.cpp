#include <bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define rall(x) x.rbegin(), rend()
#define sz(x) (lint)(x).size()
#define rep(i, x, y) for (lint i = (lint)x; i < (lint)y; i++)
#define REP(i, x, y) for (lint i = (lint)x; i <= (lint)y; i++)
using lint = long long;
using ulint = unsigned long long;
using pll = pair<lint, lint>;
using Graph = vector<vector<lint>>;
const int dy[4] = {-1, 1, 0, 0};
const int dx[4] = {0, 0, -1, 1};
const string var = "^v<>";
const string rev_var = "v^><";
const lint INF = 1e9 + 7;
const lint INTL = 1LL << 60;
inline void YES() { cout << "YES\n"; }
inline void NO() { cout << "NO\n"; }
inline void Yes() { cout << "Yes\n"; }
inline void No() { cout << "No\n"; }
inline std::ostream& spa(std::ostream& os) { return os << ' '; }
inline std::ostream& el(std::ostream& os) { return os << '\n'; }
struct Init { Init() { ios::sync_with_stdio(0); cin.tie(0); } }init;

template<typename T1, typename T2>
std::ostream &operator<< (std::ostream &os, std::pair<T1,T2> p){
    os << "{" << p.first << "," << p.second << "}";
    return os;
}
template<typename T1, typename T2> inline bool chmax(T1 &a, T2 b) {
    bool compare = a < b;
    if(compare) a = b;
    return compare;
}
template<typename T1, typename T2> inline bool chmin(T1 &a, T2 b) {
    bool compare = a > b;
    if(compare) a = b;
    return compare;
}

int main() {
    lint n;
    cin >> n;
    vector<lint> a(n+1), b(n+1), dp(n+1);
    REP(i,2,n) cin >> a[i];
    REP(i,3,n) cin >> b[i];

    dp[1] = 0;
    dp[2] = a[2];
    REP(i,3,n) dp[i] = min(dp[i-1] + a[i], dp[i-2] + b[i]);

    lint place = n;
    vector<lint> ans;

    while(true) {
        ans.push_back(place);
        if (place == 1) break;

        if (dp[place-1] + a[place] == dp[place]) place = place - 1;
        else place = place - 2;
    }
    reverse(all(ans));

    lint ans_sz = ssize(ans);
    cout << ans_sz << el;
    rep(i,0,ans_sz) cout << ans[i] << spa;
    cout << el;
}