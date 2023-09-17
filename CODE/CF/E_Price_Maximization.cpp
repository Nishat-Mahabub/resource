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
        vector<ll> rem(n);
        ll profit=0;
        for(ll i=0;i<n;i++){
            cin >> rem[i];
            profit+=rem[i]/k;
            rem[i]%=k;
        }
        sort(rem.begin(),rem.end());
        ll left=0,right=n-1;
        while(left<right){
            if((rem[left]+rem[right])/k == 1){
                profit++;
                left++;
                right--;
            }
            else{
                left++;
            }
        }
        cout << profit << endl;
    }
    return 0;
}