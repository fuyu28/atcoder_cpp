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
    lint n, m;
    cin >> n >> m;
    vector<vector<lint>> a(m+1, vector<lint>(n+1));
    REP(i,1,m) {
        REP(j,1,n) cin >> a[i][j];
    }
    vector<vector<lint>> dp(m+1, vector<lint>(1 << n, INF));

    dp[0][0] = 0;
    REP(i,1,m) {
        rep(j,0,1<<n) {
            vector<lint> already(n+1);
            REP(k,1,n) {
                if ((j / (1 << (k-1))) % 2 == 0) already[k] = 0;
                else already[k] = 1;
            }

            lint v = 0;
            REP(k,1,n) {
                if (already[k] == 1 || a[i][k] == 1) v += (1 << (k-1));
            }

            chmin(dp[i][j], dp[i-1][j]);
            chmin(dp[i][v], dp[i-1][j] + 1);
        }
    }

    if (dp[m][(1<<n)-1] == INF) cout << -1 << el;
    else cout << dp[m][(1<<n)-1] << el;
}