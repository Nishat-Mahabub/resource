#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
const ll N=1e5;
ll s,cow;
ll stall[N];

bool possible(int distance){
    ll count=cow;
    ll last=stall[0];
    for(ll i=1;i<s;i++){
        if(stall[i]-last >=distance){
            last=stall[i];
            count--;
        }
        if(count==1) break;
    }
    return count==1; 
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        cin >> s  >> cow;
        ll high=INT_MIN;
        for(ll i=0;i<s;i++){
            cin >> stall[i];
            if(stall[i]>high) high=stall[i];
        }
        high;
        sort(stall,stall+s);
        ll low=0;
        // ll high=INFINITY;
        while(high-low > 1){
            ll mid=(high+low)/2;
            // cout << mid << endl;
            // cout << " -->>"<< possible(mid) << endl;
            if(possible(mid)) low=mid;
            else high=mid-1;
        }
        if(possible(high)) cout << high << endl;
        else cout << low << endl;
    }
    return 0;
}