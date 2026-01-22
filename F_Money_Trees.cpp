#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define FOR(i,j,n) for(int i=j;i<n;i++)
#define ed "\n"
ll a[200010],h[200010],s[200010];
void solve(){
    int n,k,ans=0;
    cin>>n>>k;
    FOR(i,1,n+1) cin>>a[i];
    FOR(i,1,n+1) s[i]=s[i-1]+a[i];
    FOR(i,1,n+1) cin>>h[i];
    for(int l=1,r=1;r<=n;r++){
        if(h[r-1]%h[r]) l=r;
        while(s[r]-s[l-1]>k) l++;
        ans=max(ans,r-l+1);
    }
    cout<<ans<<ed;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--) solve();
    return 0;
}
