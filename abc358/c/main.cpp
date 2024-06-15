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
    vector<int> cnt(1<<N,INT_MAX);
    int cnt_num = 0;

    for (int tmp = 1; tmp < (1<<N); ++tmp) {
        vector<int> bucket(M+1, 0);
        bitset<10> bs(tmp);
        int bit_cnt = 0;
        for (int i = 0; i < N; ++i) {
            if (bs.test(i)) {
                for (int j = 0; j < M; ++j) {
                    if (S.at(i).at(j) == 'o') {
                        ++bucket.at(j+1);
                    }
                }
                ++bit_cnt;
            }
        }
        bool is_correct = true;
        for (int i = 1; i <= M; ++i) {
            if (bucket.at(i) == 0) is_correct = false;
        }
        if (is_correct) {
            cnt.at(cnt_num) = bit_cnt;
            ++cnt_num;
        }
    }
    int min = *min_element(all(cnt));
    cout << min << endl;
    return 0;
}