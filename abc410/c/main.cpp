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
    lint n, q;
    cin >> n >> q;

    vector<lint> a(n+1);
    REP(i,0,n) a[i] = i;

    lint zurasu = 0;
    rep(i,0,q) {
        lint query;
        cin >> query;
        if (query == 1) {
            lint p, x;
            cin >> p >> x;
            a[p] = x;
        } else if (query == 2) {
            lint p;
            cin >> p;
            lint idx = p + zurasu;
            if (idx > n) idx %= n;
            cout << a[idx] << el;
        } else {
            lint p;
            cin >> p;
            zurasu = (zurasu + p) % n;
        }
    }
}