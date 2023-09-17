#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
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

// bool fg=false;

bool check(ll n,ll m){
    // deb(n);
    if(n<m) return false;
    if(n==m) return true;
    if(n%3==0){
        return check(n/3,m) || check(2*(n/3),m);
    }
    else return false;
}

void solve(){
        ll n,m;
        cin >> n >> m;
        // fg=false;
        // check(n,m);
        if(check(n,m)) cout << "YES" << endl;
        else cout << "NO" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}