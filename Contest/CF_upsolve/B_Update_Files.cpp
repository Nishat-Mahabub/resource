#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        long double n,k;cin >> n >> k;
        ll ct=ceil(log2(k));
        long double rest= n- ((ll)1<<ct);
        if(rest>0){
            cout << ceil(rest/k) + ct << endl;
        }
        else cout << ct << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}