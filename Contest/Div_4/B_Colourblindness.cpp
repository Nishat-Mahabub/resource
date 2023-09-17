#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        string s1,s2;cin >> s1 >> s2;
        for(ll i=0;i<s1.size();i++){
            if(s1[i]=='G') s1[i]='B';
            if(s2[i]=='G') s2[i]='B';
        }
        if(s1==s2) cout << "YES" << endl;
        else cout << "NO" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}