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

bool cal(vector<ll> &v, ll w,ll c){
    ll total = 0;
    for(auto data:v){
        total += ((data + w+ w) * (data + w+ w));
        if(total>c)
            return false;
    }
    return true;
}

void solve(){
    ll n, c;
    cin >> n >> c;
    vector<ll> v(n);
    for (ll i = 0; i < n;i++)
        cin >> v[i];
    ll low = 1, high = INT_MAX;
    while(low<high){
        ll mid = (low + high + 1) / 2;
        bool total = cal(v, mid,c);
        if(total )
            low = mid;
        else
            high = mid - 1;
    }
    cout << low << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}