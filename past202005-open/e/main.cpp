#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //頂点数、辺数、クエリ数
    int N, M, Q;
    cin >> N >> M >> Q;

    //頂点NのグラフGを定義
    vector<vector<int>> G(N);

    //M本の辺を受け取る
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;

        //頂点番号を0基準に
        --u, --v;

        //辺を追加
        G.at(u).push_back(v);
        G.at(v).push_back(u);
    }

    //初期状態の各頂点の色
    vector<int> col(N);
    for (auto& coli : col) cin >> coli;

    //各クエリに答える
    for (int i = 0; i < Q; ++i) {
        int t, x;
        cin >> t >> x;

        //頂点番号を0基準に
        --x;

        //頂点xの色を出力
        cout << col.at(x) << endl;

        //タイプ1の処理
        if (t == 1) {
            for (auto v : G.at(x)) {
                col.at(v) = col.at(x);
            }
        }

        //タイプ2の処理
        if (t == 2) {
            int y;
            cin >> y;
            col.at(x) = y;
        }
    }
    return 0;
}