#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
ll n;
vector<ll> v(100000);
vector<ll> seg(400000);

void build(ll ind,ll low,ll high){
    if(low==high){
         seg[ind]=v[low];
         return;
    }
    ll mid=(low+high)/2;
    build(2*ind+1,low ,mid);
    build(2*ind+2,mid+1,high);
    seg[ind]=seg[2*ind+1]+ seg[2*ind+2];
}

ll query(ll ind,ll low,ll high,ll l,ll r){
    if(low>=l && high<=r){
        return seg[ind];
    }
    if(high<l || low>r) return 0;
    ll mid=(low+high)/2;
    ll left=query(2*ind+1,low,mid,l,r);
    ll right=query(2*ind+2,mid+1,high,l,r);
    // return seg[2*ind+1] + seg[2*ind+2]; 
    return left+right;
}
void solve(){
        cin >> n;
        for(int i=0;i<n;i++) cin >> v[i];
        build(0,0,n-1);
        for(int i=0;i<4*n+1 ;i++) cout << seg[i] << " ";
        cout << endl;
        ll q;cin >> q;
        while(q--){
            ll l,r;cin >> l >> r;
            cout << query(0,0,n-1,l,r) << endl;
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