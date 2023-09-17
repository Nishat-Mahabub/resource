#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(ll i){
        ll a,b,c,k;cin >> a >> b >> c >> k;
        ll sum=a+b+c;
        ll d=sum/3;
        if(sum%3!=0){
           cout <<  "Case " <<   i << ":" << " Fight" << endl;
        }
        else{
            if(abs(a-d)%k==0 && abs(b-d)%k==0 && abs(d-c)%k==0){
                cout <<  "Case " <<   i << ":" << " Peaceful" << endl;
            }
            else cout <<  "Case " <<   i << ":" << " Fight"  << endl;
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    ll i=0;
    while(t--){
        i++;
        solve(i);
    }
    return 0;
}