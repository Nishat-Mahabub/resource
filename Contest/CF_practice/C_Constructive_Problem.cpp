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
//============================================//

bool check(ll mex,ll i,ll j,vector<ll> &vec){
        // deb(i),deb(j),deb(mex);
            for(ll k=i;k<=j;k++){
                if(vec[k]<mex){
                    // deb(vec[i]);
                    return false;
                }
            }
    return true;
}

void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        unordered_map<ll,vector<ll>> mp;
        ll mx=INT_MIN;
        for(ll i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]].push_back(i);
            mx=max(mx,v[i]);
        }
        ll mex;
        for(ll i=0;i<=N;i++){
            if(mp.find(i)==mp.end()){
                 mex=i;
                 break;
            }
        }
        // deb(mex);
        if(mex==0){
            if(v[0]==0){
                cout << "No" << endl;
            }
            else cout << "Yes" << endl;
            return;
        }
        if(mex>mx){
            bool fg=false;
            for(auto x:mp) {
                if(x.second.size()>1){
                    fg=true;
                    break;
                }
            }
            if(fg) cout << "Yes" << endl;
            else cout << "No" << endl;
            return;
        }
        if(mex<mx){
            if(mp.find(mex+1)!=mp.end()){
                vector<ll> tmp=mp[mex+1];
                if(tmp.size()==1 ||  (tmp.size()>1 && check(mex,tmp[0],tmp[tmp.size()-1],v))){
                    cout << "Yes" << endl;
                }
                else cout << "No" << endl;
                return;
            }
            for(auto x:mp){
                vector<ll> tmp=x.second;
                if(x.first>mex && (x.second.size()==1 
                || (tmp.size()>1 && check(mex,tmp[0],tmp[tmp.size()-1],v)))){
                    cout << "Yes" << endl;
                    return;
                }
            }
            cout << "No" << endl;
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