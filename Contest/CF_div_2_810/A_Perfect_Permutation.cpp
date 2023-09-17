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
        cout << n << " ";
        for(int i=1;i<n;i++) cout << i << " ";
        cout << endl;
    }
    return 0;
}