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
    lint N, W;
    cin >> N >> W;
    vector<lint> w(N+1), v(N+1);
    REP(i,1,N) cin >> w[i] >> v[i];
    vector<vector<lint>> dp(N+1, vector<lint>(100001, INF));
    
    dp[0][0] = 0;
    REP(i,1,N) {
        // jは価値
        REP(j,0,100000) {
            if (j < v[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = min(dp[i-1][j], dp[i-1][j-v[i]] + w[i]);
        }
    }
    
    lint ans = 0;
    REP(i,0,100000) {
        if (dp[N][i] <= W) ans = i;
    }
    cout << ans << el;
}