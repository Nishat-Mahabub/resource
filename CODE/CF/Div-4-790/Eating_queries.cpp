#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,q;cin >> n >> q;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.rbegin(),v.rend());
        vector<ll> vs(n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=v[i];
            vs[i]=sum;
        }
        while(q--){
            ll data;
            ll ct=1;
            cin >> data;
            ll left=0,right=n-1;
            ll mid;
            bool flag = true;
            while(left<=right){
                mid=left + (right-left)/2;
                if(vs[mid]==data){
                    cout << mid+1 << endl;
                    break;
                    flag=false;
                }
                if(data < vs[mid]){
                    right=mid-1;
                }else{
                    left=mid+1;
                }
            }
            if(flag) cout << -1 << endl;
        }
    }
    return 0;
}