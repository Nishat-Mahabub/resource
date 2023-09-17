#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
ll ans=0;
// merger function...

void merge(vector<ll> &v,ll left,ll mid,ll right){

    ll i=left,j=mid+1;
    vector<ll > auxi;
    while(i<=mid && j<=right){
        if(v[i]<v[j]){
            auxi.push_back(v[i]);
            i++;
        }
        else{
            auxi.push_back(v[j]);
            ans++;
            j++;
        }
    }
    while(i<=mid){
        auxi.push_back(v[i]);
        i++;
    }
    while(j<=right){
        auxi.push_back(v[j]);
        j++;
    }
    for(ll i=left;i<=right;i++){
        v[i]=auxi[i-left];
    }
}

// devide function...
void divide(vector<ll> &v,ll left,ll right){
    // for(ll i=left;i<=right;i++) cout << v[i] << " ";
    // cout << endl;
    if(left<right){
        ll mid=left+ (right-left)/2;
        divide(v,left,mid);
        divide(v,mid+1,right);
        merge(v,left,mid,right);
    }
}

void solve(){
    ll n;cin >> n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin >> v[i];
    divide(v,0,n-1);
    // for(auto x:v) cout << x << " ";
    cout <<ans << endl;
        
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}