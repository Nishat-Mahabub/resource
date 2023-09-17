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
void print(vector<ll> &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}

//===================== Main problem Code starts from here =======================//
void solve(){
        ll n;cin >> n;
        ll m_ans=0;
        ll k=0;
        for(ll k=1;k<=n;k++){
            ll ans=0;
            ll mx=INT_MIN;
            for(int i=1;i<=n;i++){
                if(i==k){
                    ll r=n;
                    for(ll j=i;j<=n;j++){
                        ll x=(r*j);
                        mx=max(mx,x);
                        ans+=x;
                        r--;
                    }
                    // deb(ans);
                    break;
                }
                else{
                    ll x=(i*i);
                    mx=max(mx,x);
                        ans+=x;
                }
                // deb(ans);
            }
            // deb(m_ans);
            ans-=mx;
            m_ans=max(m_ans,ans);
        }

        cout << m_ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}