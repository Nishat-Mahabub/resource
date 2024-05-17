#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
#define allr(v)  v.rbegin(), v.rend()
#define N (ll)(2e5 +1)
#define f first
#define s second
#define pb push_back
#define el '\n'
#define ppl pair<ll,pair<ll,ll>>
#define vl vector<ll> 
#define vvl vector<vector<ll> > 
#define vpl vector<pair<ll,ll>>
#define mod (ll)(1e9+7)
void print(vl &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}
//===================== Main problem Code starts from here =======================//
int solve(int n){

    if (n<10)
      return n*(n+1)/2;

    int d = log10(n);


    int *a = new int[d+1];
    a[0] = 0, a[1] = 45;
    for (int i=2; i<=d; i++)
        a[i] = a[i-1]*10 + 45*ceil(pow(10,i-1));
 

    int p = ceil(pow(10, d));
 
    int msd = n/p;
 
    return msd*a[d] + (msd*(msd-1)/2)*p +  
           msd*(1+n%p) + solve(n%p);
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        int n;cin >> n;
        cout << solve(n) << el;
    }
    return 0;
}