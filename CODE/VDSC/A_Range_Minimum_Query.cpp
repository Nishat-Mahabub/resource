#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n;cin >> n;
    ll x=log2(n)+1;
    ll st[n][x];
    //cout << x << endl;
    for(ll i=0;i<n;i++){
        cin >> st[i][0];
    }
    for(ll j=1;j<x;j++){
        for(ll i=0;i+(1<<j)-1<n;i++){
            st[i][j]=min(st[i][j-1],st[i+(1<<(j-1))][j-1]);
        }
    }
    ll q;cin >> q;
    while(q--){
        ll l,r;cin >> l >> r;
        ll k=0;
        while((1<<(k+1)) <= (r-l)+1){
            k++;
        }
        cout << min(st[l][k],st[r-(1<<k)+1][k]) << endl;
    }
    return 0;
}