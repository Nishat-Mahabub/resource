#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        string s;cin >> s;
        vector<bool> n(26,false);
        ll aind;
        for(ll i=0;i<s.size();i++){
            n[s[i]-'a']=true;
            if(s[i]=='a') aind=i;
        }
        for(ll i=0;i<s.size();i++){
            if(n[i]==false) {
                cout << "NO" << endl;
                return;
            }
        }
        for(ll i=aind+1;i<s.size()-1;i++){
            if(s[i]>s[i+1]){
                cout << "NO" << endl;
                return;
            }
        }
        for(ll i=aind-1;i>0;i--){
            if(s[i]>s[i-1]){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}