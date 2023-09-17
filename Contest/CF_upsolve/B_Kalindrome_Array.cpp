#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

bool palindrome(vector<ll> &v){
    ll i=0;ll j=v.size()-1;
    while(i<j){
        if(v[i]!=v[j]) return false;
        i++;
        j--;
    }
    return true;
}

void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        ll i=0;ll j=n-1;
        bool fg=true;
        ll left,right;
        while(i<j){
            if(v[i]!=v[j]){
                fg=false;
                left=v[i];
                right=v[j];
                break;
            }
            i++;j--;
        }
        if(fg) cout << "YES" << endl;
        else{
            vector<ll> v1,v2;
            for(ll i=0;i<n;i++){
                if(v[i]!=left) v1.push_back(v[i]);
                if(v[i]!=right) v2.push_back(v[i]);
            }

            if(palindrome(v1) || palindrome(v2)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}