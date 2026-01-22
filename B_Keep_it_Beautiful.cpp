#include <bits/stdc++.h>
using namespace std;
#define iamspeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FOR(i,j,n) for(int i=j;i<n;i++)
#define ed "\n"
typedef long long ll;
typedef vector<ll> vll;

void solve(){
    ll n,c=0;cin>>n;
    vll a(n),v;
    FOR(i,0,n){
        cin>>a[i];
        ll x=c+(!v.empty() && v.back()>a[i]);
        if(x==0||(x==1&&a[i]<=v[0])){
            v.push_back(a[i]);
            c=x;
            cout<<"1";
        }else cout<<"0";
    }
    cout<<ed;
}

int main(){
    iamspeed
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}
