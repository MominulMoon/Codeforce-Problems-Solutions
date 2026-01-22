#include <bits/stdc++.h>
using namespace std;

#define iamspeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FOR(i, j, n) for(int i = j; i < n; i++)
#define trav(i, a) for(auto &i: a) cin >> i;
#define all(x) x.begin(), x.end()
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define F first
#define S second
#define GCD __gcd
#define DEBUG(i) cout << "DEBUG " << i << "\n";
#define sorted(x) is_sorted(x.begin(),x.end())

typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;

const ll MOD = 998244353;
const ll INF = 1e18;

void solve(){
    ll n,m;
    cin >> n >> m;
    vll v(m);
    ll mn=INT_MAX;
    FOR(i,0,m) cin >> v[i];
    sort(all(v));
    FOR(i,0,m-n+1){
        mn=min(mn,(v[n-1+i]-v[i]));
    }
    cout << mn << endl;
    
}

int main()
{
    iamspeed
    // freopen("div7.in", "r", stdin);
    // freopen("div7.out", "w", stdout);
    // precompute();
    // int t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
    solve();
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