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

vector<lint> a = {1, 14, 32, 51, 51, 51, 243, 419, 750, 910};

lint binary_search(lint key) {
    lint ng = -1; // 常に偽
    lint ok = ssize(a); // 常に真
    while(abs(ok-ng) > 1) {
        lint mid = (ok + ng) / 2;
        if (a[mid] >= key) ok = mid;
        else ng = mid;
    }
    return ok;
}

int main() {
    cout << binary_search(51) << endl;
}