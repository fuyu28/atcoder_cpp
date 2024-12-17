#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N, Q;
    cin >> N >> Q;

    vector<int> currentT(N, 1);
    vector<int> changeT(Q);
    for (auto& v : changeT) {
        cin >> v;
        v--;
    }

    for (int i = 0; i < Q; ++i) {
        if (currentT.at(changeT.at(i))) currentT.at(changeT.at(i)) = 0;
        else currentT.at(changeT.at(i)) = 1;
    }

    int cnt = 0;
    for (int i = 0; i < N; ++i) {
        if (currentT.at(i)) cnt++;
    }

    cout << cnt << endl;
    return 0;
}