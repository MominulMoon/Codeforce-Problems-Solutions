#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define iamspeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    ll a,b;
    cin>>a>>b;
    ll g=abs(a-b);
    if(a==b) cout<<"0 0\n";
    else cout<<g<<" "<<min(a%g,g-a%g)<<"\n";
}

int main(){
    iamspeed
    int t;
    cin>>t;
    while(t--) solve();
}
