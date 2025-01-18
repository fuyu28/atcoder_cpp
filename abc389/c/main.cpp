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
    lint q;
    cin >> q;
    deque<lint> snake;
    snake.push_back(0);
    lint sub = 0;
    rep(i, 0, q) {
        lint type, x;
        cin >> type;
        if (type == 1) {
            cin >> x;
            x += snake.back();
            snake.push_back(x);
        } else if (type == 2) {
            snake.pop_front(); // 0をとる
            sub = snake.front(); // 先頭を取る
            snake.pop_front();
            snake.push_front(0); // 0を追加
        } else {
            cin >> x;
            x--;
            cout << snake[x] - sub << endl;
        }
    }
    return 0;
}