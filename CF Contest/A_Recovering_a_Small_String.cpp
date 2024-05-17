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
#define el '\n'
#define ppl pair<ll,pair<ll,ll>>
#define vl vector<ll> 
#define vvl vector<vector<ll> > 
#define vpl vector<pair<ll,ll>>
#define mod (ll)(1e9+7)
void print(vl &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}
//===================== Main problem Code starts from here =======================//
void solve(){
        ll n;cin >> n;
        // map<int,string> m;
        for(char i='a';i<='z';i++){
            string s;
            ll tmp=i-'a'+1;
            s.push_back(i);
            for(ll j='a';j<='z';j++){
                s.push_back(j);
                tmp+=j-'a'+1;
                for(ll k='a';k<='z';k++){
                    s.push_back(k);
                    tmp+=k-'a'+1;
                    if(tmp==n){
                        cout << s << endl;
                        return;
                    }
                    s.pop_back();
                    tmp-=k-'a'+1;
                }
                s.pop_back();
                tmp-=j-'a'+1;
            }
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}