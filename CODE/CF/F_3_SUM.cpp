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
        map<ll,ll> mp;
        ll data;
        for(ll i=0;i<n;i++){
            cin >> data;
            mp[data%10]++;
        }
        bool flag=false;
        for(ll i=0;i<10;i++){
            for(ll j=0;j<10;j++){
                for(ll k=0;k<10;k++){
                    bool a=false,b=false,c=false;
                    if(mp[i]!=0){
                        a=true;
                        mp[i]--;
                    }
                    if(mp[j]!=0){
                        b=true;
                        mp[j]--;
                    }
                    if(mp[k]!=0){
                        c=true;
                        mp[k]--;
                    }
                    if(a && b && c){
                        if((i+j+k)%10==3){
                            cout << "YES" << endl;
                            flag=true;
                            break;
                        }
                    }
                    if(a) mp[i]++;
                    if(b) mp[j]++;
                    if(c) mp[k]++;
                }
                if(flag) break;
            }
            if(flag) break;
        }
        if(flag==false) cout << "NO" << endl;
    }
    return 0;
}