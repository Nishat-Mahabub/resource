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
void solve(){
        ll n;string s,t;cin >> n >> s >> t;
        ll count_1=0;
        if(s==t){
            cout << 0 << endl;
            return;
        }
        for(ll i=0;i<n;i++){
            count_1+=s[i]!=t[i];
        }
        reverse(all(s));
        ll count_2=0;
        for(ll i=0;i<n;i++){
            count_2+=s[i]!=t[i];
        }

        if(count_1&1) count_1=2*count_1-1;
        else count_1=2*count_1;

        if(count_2&1) count_2=2*count_2;
        else count_2=max((ll)2,2*count_2-1);

        cout << min(count_1,count_2) << endl;



}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}