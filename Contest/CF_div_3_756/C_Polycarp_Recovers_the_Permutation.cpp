#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        vector<int> v(n);
        list<int> li;
        for(ll i=0;i<n;i++) cin >> v[i];
        int m=*max_element(v.begin(),v.end());
        if(m!=v[0] && m!=v[n-1]){
            cout << -1 << endl;
            continue;
        }
        else{
            int low=0;
            int high=n-1;
            if(m==v[high]){
                li.push_back(m);
                high--;
            }
            else{
                li.push_back(m);
                low ++;;
            }
            while(low<=high){
                if(v[low]<=v[high]){
                     li.push_front(v[low]);
                     low++;
                }
                else{
                     li.push_back(v[high]);
                     high--;
                }
            }
        }
        for(auto x:li) cout << x << " ";
        cout << endl;
    }
    return 0;
}