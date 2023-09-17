#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    stack< pair<ll,string> > sp;
    while(t--){
        ll n;string s;
        cin >> n >> s;
        sp.push({n,s});
    }
    while(!sp.empty()){
        pair<ll,string> p=sp.top();
        cout << p.fst << " " << p.sec << endl;
        sp.pop();
    }
    return 0;
}