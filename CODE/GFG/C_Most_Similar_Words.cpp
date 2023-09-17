#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,m;cin >> n >> m;
        vector<string> v(n);
        for(int i=0;i<n;i++){
            string s;cin >> s;
            v[i]=s;
        } 
        ll min=INT_MAX;
        ll sum=0;
        for(ll i=0;i<n;i++){
            string s1=v[i];
            
            for(ll j=i+1;j<n;j++){
                string s2=v[j];
                sum=0;
                for(ll k=0;k<m;k++){
                    sum+=abs(s1[k]-s2[k]);
                }
                //cout << sum << endl;
                if(sum<min) min=sum;
            }
        }
        cout << min << endl;
    }
    return 0;
}