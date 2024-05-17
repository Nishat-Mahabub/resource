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
        ll m;cin >> m;
        vector<ll> bit(32,0);
        while(m--){
            ll t,n;
            cin >> t >> n;
            if(t==1){
                bit[n] += 1;
                for(int i=0;i<32;i++){
                    if(bit[i]==3){
                        bit[i+1]+=1;
                        bit[i]=1;
                    }
                    // deb(bit);
                }
                // deb(bit);
            }
            else{
                bool flag = true;
                vector<int> tmp(bit.begin(),bit.end());
                for(ll i=0;i<32;i++){
                    if((n>>i)&1){
                        if(tmp[i]==0 && tmp[i-1]!=2){
                            cout << "NO" << el;
                            flag = false;
                            break;
                        }
                        tmp[i]--;
                        
                    }
                }
                if(flag) cout << "YES" << el;
            }

        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}