#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
vector<ll> price,memory(1000);


ll max_profit(ll n){
    if(n==0) return 0;
    ll ans=0;
    if(memory[n]!=-1) return memory[n];
    for(ll cut=1;cut<=price.size();cut++){
        if(n-cut>=0){
            ans=max(ans,max_profit(n-cut) + price[cut-1]);
        }
    }
    return memory[n]=ans;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n;cin >> n;
    fill(memory.begin(),memory.end(),-1);
    ll data;
    for(ll i=0;i<n;i++){
        cin >> data;
        price.push_back(data);
    }
    cout << max_profit(n) << endl;
    return 0;
}