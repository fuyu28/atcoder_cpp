#include <bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define sz(x) (lint)(x).size()
#define rep(i, x, y) for (lint i = (lint)x; i < (lint)y; i++)
#define REP(i, x, y) for (lint i = (lint)x; i <= (lint)y; i++)
using lint = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<lint, lint>;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    lint l, q;
    cin >> l >> q;
    set<lint> wood;
    wood.insert(0), wood.insert(l);

    rep(i, 0, q)
    {
        lint c, x;
        cin >> c >> x;
        if (c == 1)
        {
            wood.insert(x);
        }
        else
        {
            auto itr = wood.lower_bound(x);
            lint right = *itr;
            itr--;
            lint left = *itr;
            cout << right - left << endl;
        }
    }
    return 0;
}