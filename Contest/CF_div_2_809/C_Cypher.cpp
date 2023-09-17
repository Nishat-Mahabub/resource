#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        for(ll i=0;i<n;i++) {
            int x;cin >> x;
            string s;cin >> s;
            for(int j=0;j<x;j++){
                if(s[j]=='U') v[i]--;
                else v[i]++;
                if(v[i]==10) v[i]=0;
                else if(v[i]==-1) v[i]=9;
            }
        }
        for(int i=0;i<n;i++) cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}