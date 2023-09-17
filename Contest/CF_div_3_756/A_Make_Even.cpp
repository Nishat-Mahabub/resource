#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        string s;cin >> s;
        bool flag=true;
        for(int i=0;i<s.size();i++){
            if((s[s.size()-1]-48) % 2==0) {
                cout << 0 << endl;
                flag=false;
                break;
            }
            else if((s[0]-48) % 2==0){
                cout << 1 << endl;
                flag=false;
                 break;
            }
            else{
                for(ll i=0;i<s.size();i++){
                    if((s[i]-48)%2==0){
                        cout << 2 << endl;
                        flag=false;
                        break;
                    }
                }
                if(flag==false) break;
            }
        }
        if(flag) cout << -1 << endl;
    }
    return 0;
}