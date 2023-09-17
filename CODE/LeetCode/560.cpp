#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n;cin >> n;
    vector<ll> v(n);
    vector<ll> sum(n);
    for(ll i=0;i<n;i++) cin >> v[i];
    sum[0]=v[0];
    int ct=0;
    int k;cin >> k;
    for(ll i=1;i<n;i++) sum[i]=sum[i-1]+v[i];
    unordered_map<int,int>  mp;
    for(int i=0;i<n;i++){
        if(sum[i]==k) ct++;
        if(mp.find(sum[i]-k) !=mp.end()){
            ct+=mp[sum[i]-k];
        }
        mp[sum[i]]++;

    }
    cout << ct << endl;
    return 0;
}