#include <bits/stdc++.h>
using namespace std;
#define iamspeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FOR(i,j,n) for(int i=j;i<n;i++)
#define ed "\n"
typedef long long ll;
typedef vector<ll> vll;
void solve(){
    int n;cin>>n;
    vll a(n);FOR(i,0,n) cin>>a[i];
    sort(a.begin(),a.end());
    ll count=0,s=2*a[0]-1;
    FOR(i,1,n) count+=(a[i]-1)/s;
    cout<<count<<ed;
}
int main(){
    iamspeed
    int t;cin>>t;
    while(t--) solve();
    return 0;
}
