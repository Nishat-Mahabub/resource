#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        string s;cin >> s;
        ll ct=0;
        for(auto x:s) if(x=='1') ct++;
        ct/=2;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='1' && ct>0){
                if(i>0) cout << '+';
                ct--;
            }
            else if(s[i]=='1'){
                if(i>0) cout << "-";
            }
            else{
                 if(i>0)cout << '+';
            }
        }
        cout << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}