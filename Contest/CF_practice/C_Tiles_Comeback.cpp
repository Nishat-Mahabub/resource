#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
// #define all(rv)  v.rbegin(), v.rend()
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
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n;i++){
        cin >> v[i];
    }
    ll left = 1;
    ll right = 1;
    ll l_index = 0;
    ll r_index = n-1;
    for (ll i = 1; i < n;i++){
        if(left==k)
            break;
        if(v[i]==v[0]){
            l_index = i;
            left++;
        }

    }
    for (ll i = n-2; i>=0;i--){
        if(right==k)
            break;
        if(v[i]==v[n-1]){
            r_index = i;
            right++;
        }
    }
    if(v[0]==v[n-1]){
        if(left==k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else if(left==k && right==k && l_index<r_index)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}