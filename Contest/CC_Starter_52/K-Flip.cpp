#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,k;cin >> n >> k;
        string s;cin >> s;
        vector<string> v;
        v.push_back(s);
        vector<bool> flip(n);
        ll ct=0;
        for(ll i=0;i<n;i++){
            // cout << i << " ct " << ct << endl;
            if(i>=k && flip[i-k]) ct--;
            if(ct&1) s[i]=(s[i]=='1'? '0':'1');
            if(i<=n-k && s[i]=='1'){
                s[i]='0';
                flip[i]=true;
                ct++;
            }
        }
        cout << s << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}