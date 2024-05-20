#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

        char A, B, C;
    cin >> A >> B >> C;
    int N;
    cin >> N;
    
    cout << (1 <= N && N <= 349 && N != 316 ? "Yes" : "No") << endl;
    return 0;
}