#include <bits/stdc++.h>
using namespace std;
#define iamspeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
int main() {
    iamspeed
    ll t; cin >> t;
    while (t--) {
        ll a, b; cin >> a >> b;
        ll g = __gcd(a, b);
        cout << ((b % a ? a : b) / g) * b << '\n';
    }
    return 0;
}


