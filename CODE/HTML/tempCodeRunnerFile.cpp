#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
         ll a ,b;cin >> a >> b;
         if(a==1){
             if(b%2==0) cout << 1 << endl;
             else cout << 2 << endl;
         }
         else if(b==1){
             if(a%2==0) cout << 1 << endl;
             else cout << 2 << endl;
         }
         else if(a%b==0 || b%a==0 || (a%2==0 && b%2==0)){
             cout << 0 << endl;
         }
         else{
             if(a%2==0 || b%2==0) cout << 1 << endl;
             else cout << 2 << endl;
         }
    }
    return 0;
}