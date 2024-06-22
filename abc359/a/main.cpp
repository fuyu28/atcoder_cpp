#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int N;
    cin >> N;
    int cnt = 0;
    rep(i,N) {
        string S;
        cin >> S;
        if (S == "Takahashi") cnt++;
    }
    cout << cnt << endl;
    return 0;
}