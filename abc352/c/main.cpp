#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N),B(N),C(N);
    long long answer = 0;
    for (int i = 0; i < N; i++) {
        cin >> A.at(i) >> B.at(i);
        C.at(i) = B.at(i) - A.at(i);
        answer += A.at(i);
    }
    
    sort(C.begin(),C.end());
    answer += C.at(N - 1);
    cout << answer << endl;
    return 0;
}