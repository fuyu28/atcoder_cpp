#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (auto& v : S) cin >> v;
    int min_cnt = INT_MAX;

    for (int bit = 1; bit < (1<<N); ++bit) {
        vector<int> bucket(M+1, 0);
        bitset<10> bs(bit);
        int cnt = 0;
        for (int i = 0; i < N; ++i) {
            if (bs.test(i)) {
                for (int j = 0; j < M; ++j) {
                    if (S.at(i).at(j) == 'o') {
                        ++bucket.at(j+1);
                    }
                }
                ++cnt;
            }
        }
        bool is_correct = true;
        for (int i = 1; i <= M; ++i) {
            if (bucket.at(i) == 0) is_correct = false;
        }
        if (is_correct) min_cnt = min(min_cnt, cnt);
    }
    cout << min_cnt << endl;
    return 0;
}