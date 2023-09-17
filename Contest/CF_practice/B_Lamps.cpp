#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
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
bool comp(pair<ll, ll>& a,pair<ll, ll>& b) {
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;

}
//============================================//
void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> lamps(n);
    for (ll i = 0; i < n;i++)
        cin >> lamps[i].first >> lamps[i].second;
    sort(lamps.begin(), lamps.end(), comp);
    ll ans = 0;
    ll on_light = 0;
    for(auto x:lamps)
        cout << x.first << " " << x.second << endl;

    stack<pair<ll,ll>> st;
    for(auto x:lamps)
        st.push({x.first, x.second});
    while( !st.empty()){
        ans += st.top().second;
        st.pop();
        on_light++;
        ll reduce = 0;
        while(st.top().first<=on_light && !st.empty()){
            st.pop();
            reduce++;
        }
        on_light -= reduce;
        if(on_light<0)
            on_light = 0;
        cout << "ans " << ans << endl;
    }

    // for (ll i = 0; i < n;i++){
    //     if(lamps[i].first > on_light){
    //         ans += lamps[i].second;
    //         on_light++;
    //     }
    //     ll reduce = 0;
    //     while(start<n  && lamps[start].first<= on_light ){
    //         start++;
    //         reduce++;
    //     }
    //     // cout << "start " << start << "ANS " << ans << endl;
    //     on_light -= reduce;
    //     if(start>i && start<n){
    //         ans += lamps[start].second;
    //         i = start;
    //         on_light = 0;   
    //         on_light++;
    //     }
    //     if(start>=n )
    //         break;
    // }
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