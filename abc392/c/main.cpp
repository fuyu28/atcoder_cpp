#include <bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define sz(x) (lint)(x).size()
#define rep(i, x, y) for (lint i = (lint)x; i < (lint)y; i++)
#define REP(i, x, y) for (lint i = (lint)x; i <= (lint)y; i++)
using lint = long long;
using ulint = unsigned long long;
using pll = pair<lint, lint>;
using Graph = vector<vector<lint>>;
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};
struct Init { Init() { ios::sync_with_stdio(0); cin.tie(0); } }init;

int main() {
    lint n;
    cin >> n;
    vector<lint> p(n), q(n);
    rep(i, 0, n) cin >> p[i];
    rep(i, 0, n) cin >> q[i];

    vector<vector<lint>> people(n, vector<lint>(3)), people_copy(n, vector<lint>(3));
    rep(i, 0, n) {
        people[i][0] = i + 1;
        people[i][1] = p[i];
        people[i][2] = q[i];
    }
    copy(all(people), begin(people_copy));
    sort(all(people), [](const vector<lint> &a, const vector<lint> &b) {
        return a[2] < b[2];
    });
    rep(i, 0, n) {
        cout << people_copy[people[i][1] - 1][2] << ' ';
    }
    cout << '\n';
    return 0;
}