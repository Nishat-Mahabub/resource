#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
const ll N=10000;
vector<ll> height(N),cost(N);
ll n;

ll total_cost(ll x){
    ll sumOfcost=0;
    for(ll i=0;i<n;i++){
        sumOfcost+= abs(height[i]-x)*cost[i];
    }
    return sumOfcost;
}

void binary_search(ll left,ll right){
    ll ans;
    while(left<=right){
        //cout << left << " " << right << endl;
        ll mid = left + ((right-left) / 2);
        ll mid_ans=total_cost(mid);
        ll left_ans=total_cost(mid-1);
        ll right_ans=total_cost(mid+1);
        if(mid_ans<right_ans && mid_ans<left_ans){
            cout << mid_ans << endl;
            break;
        }
        else if(mid_ans>=right_ans && mid_ans<=left_ans) left=mid+1;

        else if(mid_ans<=right_ans && mid_ans>=left_ans) right=mid-1;
        //cout << "This" << endl;
    }
    // cout << ans << endl;

}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        cin >> n;
        for(ll i=0;i<n;i++) cin >> height[i];
        for(ll i=0;i<n;i++) cin >> cost[i];
    }
    // ll left=*min_element(height.begin(),height.end());
    // ll right=*max_element(height.begin(),height.end());
    binary_search(0,10000);
    return 0;
}