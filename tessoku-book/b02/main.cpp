#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;
    vector<int> divisor = {1,2,4,5,10,20,25,50,100};
    bool answer = false;
    for(int i=A; i < B + 1; i++) {
        for(int x : divisor) {
            if (i == x) answer = true;
        }
    }
    if(answer == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}