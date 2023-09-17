#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        string s;cin >> s;
        reverse(s.begin(),s.end());
        string ans;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='0'){
                ll num=(s[i+2]-48)*10 + s[i+1]-48;
                ans.push_back((char)num+96);
                i+=2;
            }
            else{
                ll num=s[i]-48;
                ans.push_back((char)num+96);
            }
        }
        reverse(ans.begin(),ans.end());
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}