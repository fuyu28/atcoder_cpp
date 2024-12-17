#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<string> num;
    string s;
    for (int i = 0; i < N; ++i) {
        cin >> s;
        num.insert(s);
    }

    cout << num.size() << endl; 
}