#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    stack<ll> s;
    while(t--){
        ll n,data;cin >> n;
        if(n==1){
            cin  >> data;
            s.push(data);
        }
        if(n==-1){
            if(s.empty()){
                cout << "kuchbhi?" << endl;
            }
            else{
                cout << s.top() << endl;
                s.pop();
            }
        }
    }
    return 0;
}