#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin >> v[i];
        }
        ll left=-1;
        ll right=n;
        ll ls=0,rs=0;
        ll ans=0;
        while(left<right){
            if(left==right-1) break;
            if(ls>=rs && left!=right-1){
                right--;
                rs+=v[right];
            }
            if(ls==rs){
                // cout << "ls = " << ls << " rs = " << rs << endl;
                ans=(left-0) + (n-1-right) +2;
            }
            if(rs>=ls && left+1!=right){
                left++;
                ls+=v[left];
            }
            if(ls==rs){
                // cout << "ls = " << ls << " rs = " << rs << endl;
                ans=(left-0) + (n-1-right) +2;
            }
        }
        
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}