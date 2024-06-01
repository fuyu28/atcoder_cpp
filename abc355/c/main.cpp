#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N, T;
    cin >> N >> T;
    vector<int> A(T);
    vector<int> mod(N, 0);
    for (int i = 0; i < T; ++i) {
        cin >> A.at(i);
    }

    for (int k = 0; k < T; ++k) {
        int i = A.at(k) / N + 1;
        int j = A.at(k) - N * (i - 1);
        
    }

    return 0;
}