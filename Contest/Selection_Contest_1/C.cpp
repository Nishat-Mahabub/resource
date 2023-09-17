#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll low=1;
        ll high=1e6;
        while(low<=high){
            ll mid=low+ (high-low)/2;
            cout << mid << endl;
            string s;cin >> s;
            if(s=="Bigger") low=mid+1;
            else if(s=="Smaller") high=mid-1;
            else if(s=="Bingo!") return;
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}