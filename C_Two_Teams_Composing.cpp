#include <bits/stdc++.h>
using namespace std;

#define iamspeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FOR(i, j, n) for(int i = j; i < n; i++)
#define trav(i, a) for(auto &i: a) cin >> i;
#define all(x) x.begin(), x.end()
#define reverse_sort(v) sort(all(v),greater<int>())
#define prnt(v) for(auto&i:v) cout << i << " ";
#define take(v) for(auto &i : v ) cin >> i
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define F first
#define S second
#define GCD __gcd
#define DEBUG(i) cout << "DEBUG " << i << "\n";
#define sorted(x) is_sorted(x.begin(),x.end())
#define BS(v,n) binary_search(v.begin(),v.end(),n)
#define trans(x,y) transform(all(x),x.begin(),:: y)

typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;

const ll MOD = 998244353;
const ll INF = 1e18;


void solve(){
    ll n;
    cin >> n;
    vll v(n);
    map<ll,ll> m;
    FOR(i,0,n)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    ll mx=0;
    for(auto i:m)
        mx=max(mx,i.S);

    ll diff=m.size();

    if(diff==mx) cout << mx-1 << endl;
    else if(diff>mx) cout << min(diff-1,mx) << endl;
    else cout << min(diff,mx-1) << endl;

    
}

int main()
{
    iamspeed
    // freopen("div7.in", "r", stdin);
    // freopen("div7.out", "w", stdout);
    // precompute();
    int t=1;
    cin >> t;
    while(t--){
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