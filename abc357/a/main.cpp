#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N, M;
    cin >> N >> M;
    vector<int> H(N);
    for (int& v: H) cin >> v;

    int nokori = M;
    int cnt = 0;
    for (int i = 0; i < N; ++i ) {
        if (nokori - H.at(i) >= 0) {
            nokori -= H.at(i);
            cnt++;
        }
        else {
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}