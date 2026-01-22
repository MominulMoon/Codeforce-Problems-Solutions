#include <bits/stdc++.h>
using namespace std;

#define iamspeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FOR(i, j, n) for(int i = j; i < n; i++)
#define ed "\n" 

typedef long long ll;

void solve() {
    int n; 
    cin >> n;
    if (n > 19) {
        cout << "NO" << ed;
        return;
    }
    cout << "YES" << ed;
    ll x = 1;
    FOR(i,0,n) {
        cout << x << " ";
        x *= 3;
    }
    cout << ed;
}

int main() {
    iamspeed
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}
