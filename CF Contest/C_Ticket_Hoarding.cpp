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
void solve2()
{ // look at other approaches
 
    int n,m,k;
    cin >> n>>m>>k;
 
    // deb(n);
    // deb(m);
    // deb(k);
 
    vector<int> A(n+2);
    for(int i=1;i<=n;i++) cin>>A[i];
 
    sort(A.begin()+1,A.begin()+1+n);
 
    int ans=0;
 
    int rem=k;
    int taken=0;
    for(int i=1;i<=n;i++){
        int take=min(m,rem);
        // deb(take);
        // deb(A[i]);
        ans+=(A[i] + taken) * take;
        rem-=take;
        taken+=take;
    }
    cout<<ans<<endl;
    
}
void solve(){
        ll n,m,k;cin >> n >> m >> k;
        vector<pair<ll,ll>> v(n);
        for(ll i=0;i<n;i++){
            ll num;cin >> num;
            v[i] = {num,i};
        }
        sort(v.begin(),v.end(),[](pair<ll,ll> a,pair<ll,ll> b){
            return a.first < b.first;
        });
        ll days = ceil((double)k/m);
        // sort(v.begin(),v.begin()+days,[](pair<ll,ll> a,pair<ll,ll> b){
        //     return a.second < b.second;
        // });

        ll money=0;
        ll tickets=0 ;
        // deb(money);
        for(ll i=0;i<days;i++){
            if(i==days-1){
                money += (v[i].first + tickets)*(k%m==0 ? m:k%m);
                continue;
            }
            money += (v[i].first + tickets)*m;
            tickets += m;
        }
        cout << money << el;

        // for(ll i=0;i<days;i++){
        //     cout << v[i].first << " " << v[i].second << endl;
        // }
        // cout << "_________" << endl;



}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}