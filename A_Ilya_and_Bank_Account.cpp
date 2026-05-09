#include <bits/stdc++.h>
using namespace std;

#define iamspeed                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define FOR(i, j, n) for (int i = j; i < n; i++)
#define trav(i, a)    \
    for (auto &i : a) \
        cin >> i;
#define all(x) x.begin(), x.end()
#define reverse_sort(v) sort(all(v), greater<int>())
#define prnt(v)       \
    for (auto &i : v) \
        cout << i << " ";
#define take(v)       \
    for (auto &i : v) \
    cin >> i
#define ed "\n"
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define F first
#define S second
#define GCD __gcd
#define LCM(a, b) (a * b) / GCD(a, b)
#define DEBUG(i) cout << "DEBUG " << i << "\n";
#define sorted(x) is_sorted(x.begin(), x.end())
#define BS(v, n) binary_search(v.begin(), v.end(), n)
#define trans(x, y) transform(all(x), x.begin(), ::y)
#define noo cout << "NO" << ed;
#define yess cout << "YES" << ed;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ld> vld;
typedef vector<ll> vll;

const ll MOD = 998244353;
const ll INF = 1e18;
const ll NN = 1e6 + 1;
// vll primes(NN+1,0);
// void seive(){
//     primes[0]=primes[1]=1;
//     for(ll i=2;i*i<=NN;i++){
//         if(primes[i]==0){
//             for(ll j=i*i;j<=NN;j+=i){
//                 primes[j]++;
//             }
//         }
//     }
// }

void solve()
{
    ll n;
    cin >> n;
    if (n > 0)
    {
        cout << n << ed;
        return;
    }
    ll lst = -n % 10;
    ll lst2 = -(n % 100) / 10;
    string s = to_string(n);
    ll len = s.length();
    string ans;
    if (lst > lst2)
    {
        FOR(i, 0, len - 1)
        ans += s[i];
    }
    else
    {
        FOR(i, 0, len)
        {
            if (i == len - 2)
                continue;
            ans += s[i];
        }
    }
    ll ans2 = stoll(ans);
    cout << ans2 << ed;
}

int main()
{
    iamspeed
        // freopen("div7.in", "r", stdin);
        // freopen("div7.out", "w", stdout);
        // precompute();
        int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
                   ▄▄▄▄    ▄▄▄       ███▄    █  ██ ▄█▀▄▄▄       ██▓
                  ▓█████▄ ▒████▄     ██ ▀█   █  ██▄█▒▒████▄    ▓██▒
                  ▒██▒ ▄██▒██  ▀█▄  ▓██  ▀█ ██▒▓███▄░▒██  ▀█▄  ▒██▒
                  ▒██░█▀  ░██▄▄▄▄██ ▓██▒  ▐▌██▒▓██ █▄░██▄▄▄▄██ ░██░
                  ░▓█  ▀█▓ ▓█   ▓██▒▒██░   ▓██░▒██▒ █▄▓█   ▓██▒░██░
                  ░▒▓███▀▒ ▒▒   ▓▒█░░ ▒░   ▒ ▒ ▒ ▒▒ ▓▒▒▒   ▓▒█░░▓
                  ▒░▒   ░   ▒   ▒▒ ░░ ░░   ░ ▒░░ ░▒ ▒░ ▒   ▒▒ ░ ▒ ░
                   ░    ░   ░   ▒      ░   ░ ░ ░ ░░ ░  ░   ▒    ▒ ░
                   ░            ░  ░         ░ ░  ░        ░  ░ ░
                        ░
 ▄████▄   ▒█████  ▓█████▄ ▓█████      █████▒██▓ ███▄    █  ██▓  ██████  ██░ ██ ▓█████ ▓█████▄
▒██▀ ▀█  ▒██▒  ██▒▒██▀ ██▌▓█   ▀    ▓██   ▒▓██▒ ██ ▀█   █ ▓██▒▒██    ▒ ▓██░ ██▒▓█   ▀ ▒██▀ ██▌
▒▓█    ▄ ▒██░  ██▒░██   █▌▒███      ▒████ ░▒██▒▓██  ▀█ ██▒▒██▒░ ▓██▄   ▒██▀▀██░▒███   ░██   █▌
▒▓▓▄ ▄██▒▒██   ██░░▓█▄   ▌▒▓█  ▄    ░▓█▒  ░░██░▓██▒  ▐▌██▒░██░  ▒   ██▒░▓█ ░██ ▒▓█  ▄ ░▓█▄   ▌
▒ ▓███▀ ░░ ████▓▒░░▒████▓ ░▒████▒   ░▒█░   ░██░▒██░   ▓██░░██░▒██████▒▒░▓█▒░██▓░▒████▒░▒████▓
░ ░▒ ▒  ░░ ▒░▒░▒░  ▒▒▓  ▒ ░░ ▒░ ░    ▒ ░   ░▓  ░ ▒░   ▒ ▒ ░▓  ▒ ▒▓▒ ▒ ░ ▒ ░░▒░▒░░ ▒░ ░ ▒▒▓  ▒
  ░  ▒     ░ ▒ ▒░  ░ ▒  ▒  ░ ░  ░    ░      ▒ ░░ ░░   ░ ▒░ ▒ ░░ ░▒  ░ ░ ▒ ░▒░ ░ ░ ░  ░ ░ ▒  ▒
░        ░ ░ ░ ▒   ░ ░  ░    ░       ░ ░    ▒ ░   ░   ░ ░  ▒ ░░  ░  ░   ░  ░░ ░   ░    ░ ░  ░
░ ░          ░ ░     ░       ░  ░           ░           ░  ░        ░   ░  ░  ░   ░  ░   ░
░                  ░                                                                   ░
*/