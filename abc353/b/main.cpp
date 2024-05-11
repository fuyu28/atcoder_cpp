#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N, K;
    cin >> N >> K;

    vector<int> A(N);

    for (auto& v : A) cin >> v;
    
    int cnt = 0;
    int residue = 0;
    for (int i = 0; i < N; ++i) {
        residue = K - A.at(i);
        for(int j = i + 1; j < N; ++j) {
            if (residue >= A.at(j)) {
                i++;
                residue -= A.at(j);
            }
            else break;
        }
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}