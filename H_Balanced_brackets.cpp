#include <bits/stdc++.h>
#define iamspeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
    iamspeed;
    string s; if(!(cin>>s))return 0;
    stack<char> st;
    for(char c:s){
        if(c=='(') st.push(c);
        else{
            if(st.empty()){ cout<<"NO"; return 0; }
            st.pop();
        }
    }
    cout<<(st.empty()?"YES":"NO");
    return 0;
}
