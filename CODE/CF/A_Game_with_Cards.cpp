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
        ll max_n=INT_MIN;
        for(int i=0;i<n;i++){
            ll data;
            cin >> data;
            if(data>max_n) max_n=data;
        }
        ll m;cin >> m;
        ll max_m=INT_MIN;
        for(int i=0;i<m;i++){
            ll data;
            cin >> data;
            if(data>max_m) max_m=data;
        }
        // if(max_n==max_m){
        //     if(n>m) cout << "Alice" << endl;
        //     else cout << "Bob" << endl;
        // }
        if(max_n==max_m){
            cout << "Alice" << endl;
             cout << "Bob" << endl;
        }
        else if(max_n>max_m){
             cout << "Alice" << endl;
             cout << "Alice" << endl;
        }
        else{
             cout << "Bob" << endl;
             cout << "Bob" << endl;
        }
    }
    return 0;
}