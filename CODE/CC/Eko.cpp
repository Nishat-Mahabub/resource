#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
const ll  N = 1e6;
ll n,m;
ll arr[N];

bool predicate(ll h){
    ll cutting_wood=0;
    for(ll i=0;i<n;i++){
        if(arr[i]>h) cutting_wood+=arr[i]-h;
    }
    return cutting_wood>=m;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    ll low=0;
    ll high=*max_element(arr,arr+n);
    //cout << low << " " << high << endl;
    while(high-low>1){
        ll mid=(low+high)/2;
        if(predicate(mid)){
            low=mid;
        }else{
            high=mid-1;
        }
    }
    if(predicate(high)) cout << high << endl;
    else cout << low << endl;

    return 0;
}