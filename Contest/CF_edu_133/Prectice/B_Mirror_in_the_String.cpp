#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        string s;cin >> s;
        string ans;
        if(s.size()>1 && s[0]==s[1]){
            cout << s[0] << s[1] << endl;
            return;
        }
        ans.push_back(s[0]);
        for(ll i=1;i<n;i++){
            if(s[i]<=s[i-1]) ans.push_back(s[i]);
            else break;
        }
        string rans=ans;
        reverse(rans.begin(),rans.end());
        cout << ans <<  rans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}