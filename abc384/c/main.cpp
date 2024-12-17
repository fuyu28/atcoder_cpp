#include <bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define sz(x) (lint)(x).size()
#define rep(i, x, y) for (lint i = (lint)x; i < (lint)y; i++)
#define REP(i, x, y) for (lint i = (lint)x; i <= (lint)y; i++)
using lint = long long;
using ulint = unsigned long long;
using pii = pair<int, int>;
using pll = pair<lint, lint>;
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};
struct Init { Init() { ios::sync_with_stdio(0); cin.tie(0); } }init;

bool compair_by_b(pair<lint, string> a, pair<lint, string> b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main() {
    lint a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    pair<lint, string> score[1 << 5];
    vector<lint> v = {a, b, c, d, e};
    string chars = "ABCDE";

    for (lint bit = 0; bit < (1<<5); ++bit) {
        score[bit].first = 0;
        score[bit].second = "";
        for (lint i = 0; i < 5; ++i) {
            if (bit & (1<<i)) {
                score[bit].first += v[i];
                score[bit].second += chars[i];
            }
        }
    }
    sort(all(score), compair_by_b);
    // reverse(all(score));

    rep(i, 0, 1<<5) {
        cout << score[i].second << '\n';
    }
    return 0;
}