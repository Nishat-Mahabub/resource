#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll int
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

vector<int> f(32,0);
void add(int x){
    for(int i=0;i<31;i++){
        if(x&(1<<i)) f[i]++;
    }
}
void del(int x){
    for(int i=0;i<31;i++){
        if(x&(1<<i)) f[i]--;
    }
}

int getNum(){
    int num=0;
    for(int i=0;i<31;i++){
        if(f[i]>0) num+=(1<<i);
    }
    return num;
}

void solve(){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++) cin >> nums[i];
        int k;
        cin >> k;

        int ans=INT_MAX;
        int left=0;
        int i=0;
        for(;i<n;i++){
            add(nums[i]);
            // cout << getNum() << endl;
            if(left<n && getNum()>=k){
                ans=min(ans,i-left+1);
                del(nums[left++]);
                // cout << getNum() << endl;
            }
        }
        // deb(left);
        // deb(i);
        if(getNum()>=k)ans=min(ans,i-left);
        cout << ans << endl;

        
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}