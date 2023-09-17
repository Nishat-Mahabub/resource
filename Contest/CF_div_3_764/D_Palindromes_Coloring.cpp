#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,k;cin >> n >> k;
        string s;cin >> s;
        map<char,int> mp;
        for(ll i=0;i<n;i++){
            mp[s[i]]++;
        }
        int p=0;
        int n_p=0;
        for(auto t:mp){
            p+=t.sec/2;
            n_p+=t.sec%2;
        }
        int l_l = p/k;
        n_p+=(p%k)*2;
        l_l*=2;
        if(n_p>=k) l_l++; 
        cout << l_l << endl;
    }
    return 0;
}