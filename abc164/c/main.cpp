#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    for (auto& v : S) cin >> v;

    map<string, int> num;
    for (auto v : S) {
        ++num[v];
    }

    cout << num.size() << endl;
    
    return 0;
}