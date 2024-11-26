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

int main() {
    lint n;
    cin >> n;
    lint cnt = 0;
    auto rec = [&](auto f, lint num, lint n3, lint n5, lint n7, lint &cnt)-> void{
        if (num > n) return;
        if (n3 && n5 && n7) cnt++;
        f(f, num*10+3, n3++, n5, n7, cnt);
        f(f, num*10+5, n3, n5++, n7, cnt);
        f(f, num*10+7, n3, n5, n7++, cnt);
    };

    // cout << ans << endl;
    return 0;
}