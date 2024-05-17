#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
#define allr(v)  v.rbegin(), v.rend()
#define N (ll)(2e5 +1)
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

ll cache[3001][3001];

ll sub(string s,string t,ll i,ll j){
    if(i<=0 || j<=0) return 0;
    if(cache[i][j]!=-1) return cache[i][j];
    if(s[i-1]==t[j-1]) return cache[i][j] = 1 + sub(s,t,i-1,j-1);
    return cache[i][j] = max(sub(s,t,i,j-1),sub(s,t,i-1,j));
}

void solve(){
        string s,t;
        cin >> s >> t;
        ll m =s.size();
        ll n =t.size();
        // memset(cache,-1,sizeof(cache));
        // cout << sub(s,t,m,n) << el;
        for(ll i=0;i<=m;i++){
            for(ll j=0;j<=n;j++){
                if(i==0 || j==0) cache[i][j] = 0;
                else if(s[i-1]==t[j-1]) cache[i][j] = 1 + cache[i-1][j-1] ;
                else cache[i][j] = max(cache[i-1][j],cache[i][j-1]);
            }
        }
        string res;
        ll i=m;
        ll j=n;
        while(i>0 && j>0){
            if(s[i-1]==t[j-1]) {
                res.push_back(s[i-1]);
                i--,j--;
            }
            else if(cache[i-1][j]>cache[i][j-1]) i--;
            else j--;
        }
        reverse(res.begin(),res.end());
        cout << res << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}