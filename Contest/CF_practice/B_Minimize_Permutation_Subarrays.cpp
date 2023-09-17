#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
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
void solve(){
        ll n;
        cin >> n;
        ll data;
        ll index_1;
        ll index_2;
        ll index_n;
        for (ll i = 0; i < n;i++){
            cin >> data;
            if(data==1)
                index_1 = i;
            if(data==2)
                index_2 = i;
            if(data==n)
                index_n = i;
        }
        if(index_n> index_1 && index_n> index_2)
            cout << index_n + 1 << " " << max(index_1, index_2) + 1 << endl;
        else if(index_n< index_1 && index_n< index_2 ){
            cout << index_n + 1 << " " << min(index_1, index_2) + 1 << endl;
        }
        else{
            cout << index_n + 1 << " " << index_n  + 1 << endl;
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