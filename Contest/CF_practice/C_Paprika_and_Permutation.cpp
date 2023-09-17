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
        ll data;
        multiset<ll> st;
        for(ll i=0;i<n;i++){
            cin >> data;
            st.insert(data);
        }

        ll op=0;
        for(ll i=n;i>=1;i--){
            if(st.find(i)!=st.end()){
                st.erase(st.find(i));
            }
            else{
                auto it = st.lower_bound(2*i + 1);
                if(it==st.end()){
                    cout << -1 << endl;
                    return;
                }
                else{
                    op++;
                    st.erase(it);
                }
            }
            
        }
        cout << op << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}