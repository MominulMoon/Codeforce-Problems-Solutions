#include <bits/stdc++.h>
using namespace std;
#define iamspeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FOR(i,j,n) for(int i=j;i<n;i++)
#define ed "\n"
typedef long long ll;
typedef vector<ll> vll;
void solve(){
    ll a,b,n;cin>>a>>b>>n;
    vll v(n),g(n);
    FOR(i,0,n) cin>>v[i];
    FOR(i,0,n) cin>>g[i];
    FOR(i,0,n) b-=(v[i]*((g[i]+a-1)/a));
    sort(v.begin(),v.end());
    if(b>=0||abs(b)<v[n-1]) cout<<"YES"<<ed;
    else cout<<"NO"<<ed;
}
int main(){
    iamspeed
    int t;cin>>t;
    while(t--) solve();
    return 0;
}
