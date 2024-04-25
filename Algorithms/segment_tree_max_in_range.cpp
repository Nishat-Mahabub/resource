#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define N (ll)(2e5 +1)

vector<ll> v(N),segment(4*N+1);

void build(ll index,ll low,ll high){
    if(low==high){
        segment[index]=v[low];
        return;
    }
    ll mid=(low+high)/2;
    build(2*index+1,low,mid);
    build(2*index+2,mid+1,high);
    segment[index]=max(segment[2*index+1],segment[2*index+2]);
}

ll query(ll index,ll low,ll high,ll l,ll r){
    if(low>=l && high<=r) return segment[index];
    if(low>r || high<l) return INT64_MIN;
    ll mid=(low+high)/2;
    ll left=query(2*index+1,low,mid,l,r);
    ll right=query(2*index+2,mid+1,high,l,r);
    return max(left,right);
}


int main(){
    ll n;cin >> n;
    for(ll i=0;i<n;i++) cin >> v[i];
    build(0,0,n-1);
    ll q;cin >> q;
    while(q--){
        ll l,r;cin >> l >> r;
        cout << query(0,0,n-1,l,r) << endl;
    }
}