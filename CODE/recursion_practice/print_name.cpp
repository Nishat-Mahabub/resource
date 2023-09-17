#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

void print(ll start,ll end){
    
    cout <<start <<  " Nishat Mahabub" << endl;
    if(start==end) return;
    print(start+1,end);
}

void solve(){
        ll n;cin >> n;
        print(1,n);
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}