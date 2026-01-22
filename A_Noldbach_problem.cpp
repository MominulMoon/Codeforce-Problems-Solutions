#include <bits/stdc++.h>
using namespace std;

#define iamspeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FOR(i, j, n) for(int i = j; i < n; i++)
#define trav(i, a) for(auto &i: a) cin >> i;
#define all(x) x.begin(), x.end()
#define ed "\n"
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
const ll NN=1e3+1;
vll primes(NN+1,0);
void seive(){
    primes[0]=primes[1]=1;
    for(ll i=2;i*i<=NN;i++){
        if(primes[i]==0){
            for(ll j=i*i;j<=NN;j+=i){
                primes[j]++;
            }
        }
    }
}


void solve(){
    ll n,k;
    cin >> n >> k;
    if(k==0)
    {
        cout <<"YES"<< ed;
        return;
    }
    vll v;
    for(ll i=2;i<=n;i++){
        if(primes[i]==0)
            v.PB(i);
    }
    ll cnt=0;
    ll sz=v.size();
    for(ll i=1;i<sz;i++){
        ll val=1+v[i-1]+v[i];
        if(val>n) break;
        if(find(all(v),val)!=v.end())
            cnt++;
        if(cnt==k){
            cout << "YES"<<ed;
            return;
        }
    }
    cout <<"NO"<< ed;
    
}

int main()
{
    iamspeed
    // freopen("div7.in", "r", stdin);
    // freopen("div7.out", "w", stdout);
    // precompute();
    int t=1;
    seive();
    //cin >> t;
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