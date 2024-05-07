#include <bits/stdc++.h>
using namespace std;

//setの利用
int main() {
    int N;
    cin >> N;
    vector<int> d(N);
    for (int i = 0; i < N; ++i) cin >> d.at(i);

    set<int> values;
    for (int i = 0; i < N; ++i) {
        values.insert(d.at(i));
    }

    cout << values.size() << endl;
}