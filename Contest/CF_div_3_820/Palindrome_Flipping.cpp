#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        string s;cin >> s;
        string tmp=s;
        reverse(tmp.begin(),tmp.end());
        if(n&1 || tmp==s) cout << "YES" << endl;
        else{
            ll one=0,zero=0;
            for(ll i=0;i<s.size();i++){
                if(s[i]=='1') one++;
                else zero++;
            }
            if(one%2==0 || zero%2==0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}