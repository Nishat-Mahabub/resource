#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define f first
#define s second
#define pb push_back
#define mod (ll)(1e9+7)
void print(vector<ll> &vec){
    for(ll i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}
void print(ll x){
    cout << x << endl;
}
void print(char x){
    cout << x << endl;
}
void print(string &x){
    cout << x << endl;
}
//============================================//

double Area(double d,double h){
    // cout << "=>" <<((double)d*h)/2 << endl;
    return ((double)d*h)/2;
}

void solve(){
        int n,d,h;
        cin >> n >> d >> h;
        double ans=0;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++){
            if(v[i]+h <= v[i+1]){
                ans+=Area(d,h);
            }
            else{
                double new_d= ((double)d/h)*(v[i]+h-v[i+1]);
                ans+=(Area(d,h) -Area(new_d,(double)v[i]+h-v[i+1]));
            }
        }
        ans+=Area(d,h);
        cout << fixed << setprecision(6) <<  ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}