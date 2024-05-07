#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> d(N),e;
    for (int i = 0; i < N; ++i) cin >> d.at(i);

    sort(d.begin(), d.end(), greater<int>()); 
    for (int i = 0; i < N; ++i) {
        if (i == N - 1) {
            e.push_back(d.at(i));
            break;
        }
        if (d.at(i) != d.at(i + 1)) e.push_back(d.at(i));
    }

    cout << e.size() << endl;
    return 0;
}