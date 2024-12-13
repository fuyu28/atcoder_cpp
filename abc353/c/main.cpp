#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    cin >> N;
    vector<ll> A(N);
    for (auto &v : A) cin >> v;
    ll sum = 0;

    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            sum += (A.at(i) + A.at(j)) % 100000000;
        }
    }

    cout << sum << endl;
    return 0;
}