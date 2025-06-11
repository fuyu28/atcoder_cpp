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
const lint INF = 1LL << 60;
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
    vector<lint> p(n+1), a(n+1);
    REP(i,1,n) cin >> p[i] >> a[i];
    vector<vector<lint>> dp(n+1, vector<lint>(n+1, -INF));

    dp[1][n] = 0;
    for(lint LEN=n-2; LEN >= 0; LEN--) {
        for (lint l=1; l <= n-LEN; l++) {
            lint r = l + LEN;

            lint score1 = 0;
            if (l <= p[l-1] && p[l-1] <= r) score1 = a[l-1];

            lint score2 = 0;
            if (l <= p[r+1] && p[r+1] <= r) score2 = a[r+1];
            
            if (l == 1) {
                dp[l][r] = dp[l][r+1] + score2;
            }
            else if (r == n) {
                dp[l][r] = dp[l-1][r] + score1;
            }
            else {
                dp[l][r] = max(dp[l-1][r] + score1, dp[l][r+1] + score2);
            }
        }
    }
    
    lint ans = 0;
    REP(i,1,n) chmax(ans, dp[i][i]);
    cout << ans << el;
}