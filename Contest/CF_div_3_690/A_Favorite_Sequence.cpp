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
        for(int i=0;i<n;i++) cin >> v[i];
        ll left=0;
        ll right=n-1;
        while(left<right){
            cout << v[left] << " " << v[right] << " ";
            left++;
            right--;

        }
        if(n&1) cout << v[left] << " " << endl;
        else cout << endl;
    }
    return 0;
}