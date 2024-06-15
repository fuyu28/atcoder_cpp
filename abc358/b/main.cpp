#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N, A;
    cin >> N >> A;
    vector<int> T(N);
    for (int& i : T) cin >> i;

    int time = 0;
    for (int i = 0; i < N; ++i) {
        if (i == 0) time += T.at(i) + A;
        else {
            if (T.at(i) - T.at(i - 1) > A) {
                time = T.at(i) + A;
            }
            else {
                time += A;
            }
        }
        cout << time << endl;
    }
    return 0;
}