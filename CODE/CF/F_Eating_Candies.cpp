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
        for(ll i=0;i<n;i++) cin >> v[i];
        ll left=0,right=n-1;
        ll cnd=2;
        ll lc=v[0],rc=v[n-1];
        ll result=0;
        while(left<right){
            //cout << lc << " " << rc << endl;
            if(lc==rc){
                result+=cnd;
                cnd=0;
                //cout << result << endl;
                if(left==right-1){
                    break;
                }
                else{
                    left++;
                    lc+=v[left];
                    cnd++;
                }
            }
            if(lc<rc){
                while(lc<rc && left<right){
                    left++;
                    lc+=v[left];
                    cnd++;
                }
            }
            if(rc<lc){
                while(rc<lc && left<right){
                    right--;
                    rc+=v[right];
                    
                    cnd++;
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}