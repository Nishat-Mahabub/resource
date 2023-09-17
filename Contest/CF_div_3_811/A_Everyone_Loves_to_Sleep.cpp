#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,h,m;cin >> n >> h >> m;
        ll hh=LLONG_MAX,mm=LLONG_MAX;
        while(n--){
            ll a,b;cin >> a >> b;
            if(a==h && b==m){
                hh=0,mm=0;
            }
            ll hour,mini;
            if(a==h){
                if(b<m){
                    hour=23;
                    mini=max(mini,mini=60+b-m);
                }
                else{
                    hour=0;
                    mini=b-m;
                }
            }
            else if(a<h){
                hour=(23-h)+ a;
                mini=(60-m) +b;
                if(mini>59){
                    hour++;
                    mini=mini%60;
                }
            }
            else if(a>h){
                hour=a-h;
                mini=b-m;
                if(mini<0){
                    hour--;
                    mini=mini+60;
                }
            }
            // cout << hour << " -> " << mini << endl;
            if(hour<hh){
                hh=hour;
                mm=mini;
            }
            if(hour==hh){
                if(mini<mm){
                 mm=mini;
                }
            }
        }
        cout << hh <<" " << mm << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}