#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
#define allr(v)  v.rbegin(), v.rend()
#define N (ll)(2e5 +1)
#define f first
#define s second
#define pb push_back
#define mod (ll)(1e9+7)
void print(vector<ll> &vec){
    for(ll i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}
void print(ll x){
    cout << x << endl;
}
void print(char x){
    cout << x << endl;
}
void print(string &x){
    cout << x << endl;
}
//===================== Main problem Code starts from here =======================//
void solve(){
        string s;cin >> s ;
        map<ll,bool> mp;
        ll mn=INT_MAX;
        for(ll i=s.size()-1;i>=0;i--){
            if(s[i]-'0' > mn){
                if(s[i]=='9') continue;
                else s[i]++;
            }
            mn=min(mn,(ll)s[i]-'0');
        }
        sort(all(s));
        cout << s << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}