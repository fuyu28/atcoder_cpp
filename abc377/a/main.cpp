#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    string S;
    cin >> S;
    int bucket[3] = {0};
    int ans = 1;

    for (int i=0; i<3; i++) {
        if (S[i] == 'A') bucket[0]++;
        if (S[i] == 'B') bucket[1]++;
        if (S[i] == 'C') bucket[2]++;
    }

    for (int x : bucket) {
        if (x==0) ans = 0;
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}