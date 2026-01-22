#include <bits/stdc++.h>
#define iamspeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    iamspeed
    int t, x; cin >> t;
    queue<int> q;
    while (t--) {
        int op; cin >> op;
        if (op == 1) {
            cin >> x;
            q.push(x);
        } else if (op == 2) {
            if (!q.empty()) q.pop();
        } else {
            if (!q.empty()) cout << q.front() << endl;
            else cout << "Empty!"<< endl;
    }
}
}

