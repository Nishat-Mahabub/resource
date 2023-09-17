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
#define vl vector<ll> 
#define vvl vector<vector<ll> > 
#define vpl vector<pair<ll,ll>>
#define mod (ll)(1e9+7)
void print(vl &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}
//===================== Main problem Code starts from here =======================//
bool comp(pair<ll, ll>& a,pair<ll, ll>& b) {
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}
void solve(){
        ll n,m,h;cin >> n >> m >> h;
        vvl table(n,vl(m));
        vpl rank;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin >> table[i][j];
            }
            sort(all(table[i]));
        }
        ll rs=0,rp=0,sum=0;ll t=h;
        for(ll j=0;j<m;j++){
                if(table[0][j]<=t){
                    // deb(t);
                     rs++;
                     t-=table[0][j];
                     sum+=table[0][j];
                     rp+=sum;
                }
                else break;
        }
        // deb(rs);
        // deb(rp);
        

        for(ll i=1;i<n;i++){
            ll score=0,penalty=0;ll t=h,sum=0;
            for(ll j=0;j<m;j++){
                if(table[i][j]<=t){
                     score++;
                     t-=table[i][j];
                     sum+=table[i][j];
                     penalty+=sum;
                }
                else break;
            }
            rank.push_back({score,penalty});
        }
        sort(all(rank),comp);
        // for(auto x:rank) cout << x.first << " " << x.second << endl;
        ll i=0;
        for(i=0;i<rank.size();i++){
            if(rank[i].first<rs) break;
            if(rank[i].first==rs && rank[i].second>=rp) break;
        }
        cout << i +1 << el;


}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}