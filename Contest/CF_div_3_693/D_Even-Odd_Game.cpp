#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> even,odd;
        ll es=0,os=0;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            if(data&1){
                os+=data;
                odd.push_back(data);
            }
            else{
                es+=data;
                even.push_back(data);
            }
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        ll i=0,j=0;
        ll as=0,bs=0;
        while(i<even.size() && j<odd.size()){
            //Alice turn
            if(i<even.size()){
                if(es<os){
                if(even[i]<odd[j]){
                    os-=odd[j];j++;
                }
                else{
                    as+=even[i];
                    es-=even[i];i++;
                }
                }
                else{
                    as+=even[i];
                    es-=even[i];i++;
                }
            }
            //Bob turn...
            if(j<odd.size()){
                if(os<es){
                    if(odd[j]<even[i]){
                        es-=even[i];
                        i++;
                    }
                    else{
                        os-=odd[j];
                        bs+=odd[j];
                        j++;
                    }
                }
                else{
                    bs+=odd[j];
                    os-=odd[j];
                    j++;
                }
            }
            
        }
        if(es>os) cout << "Alice" << endl;
        else if(es<os) cout << "Bob" << endl;
        else cout << "Tie" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}