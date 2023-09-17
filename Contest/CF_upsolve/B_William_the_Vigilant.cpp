#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
const int N = 1e6+5;
// char s[N];

void solve(){
        ll n,q;cin >> n >> q;
        string s;
        s.push_back('0');
        string ss;cin >> ss;
        s+=ss;
        // cout << s << endl;
        ll ans=0;
        for(ll i=1;i<=n-2;i++){
            if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c'){
                ans++;
            }
        }
        while(q--){
            ll i;
            char c;
            cin >> i >> c;
            if(s[i]==c) cout << ans << endl;
            else {
                if((s[i]=='a' && s[i+1]=='b' && s[i+2]=='c')
                 ||(s[i-1]=='a' && s[i]=='b' && s[i+1]=='c')
                 || (s[i-2]=='a' && s[i-1]=='b' && s[i]=='c')) ans--;
                 if((c=='a' && s[i+1]=='b' && s[i+2]=='c')||
                 (c=='b' && s[i-1]=='a' && s[i+1]=='c')
                 || (c=='c' && s[i-1]=='b' && s[i-2]=='a')) ans++;
                 cout << ans << endl;
                 s[i]=c;
            }

        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}