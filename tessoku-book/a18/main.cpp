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
    lint n, s;
    cin >> n >> s;
    vector<lint> a(n+1);
    REP(i,1,n) cin >> a[i];
    vector<vector<bool>> dp(n+1, vector<bool>(s+1));

    // DP (n=0)
    dp[0][0] = true;
    REP(i,1,s) dp[0][i] = false;

    // DP (n<0)
    // i: カード枚数, j:合計
    REP(i,1,n) {
        REP(j,0,s) {
            // 合計より今のカードの数字が大きいとき (足すことができないとき)
            if (j < a[i]) {
                // 既に条件を満たしているときtrue
                if (dp[i-1][j] == true) dp[i][j] = true;
                else dp[i][j] = false;
            }
            // 合計が今のカードの数字より大きいとき (足すことができるかもしれないとき)
            if (j >= a[i]) {
                // 既に条件を満たしているか、足すことによって条件を満たすときtrue
                if (dp[i-1][j] == true || dp[i-1][j-a[i]] == true) dp[i][j] = true;
                else dp[i][j] = false;
            }
        }
    }

    if (dp[n][s] == true) Yes();
    else No();

    REP(i,0,n) {
        REP(j,0,s) {
            cout << dp[i][j] << spa;
        }
        cout << el;
    }
}