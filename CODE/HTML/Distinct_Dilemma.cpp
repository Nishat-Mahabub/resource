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
        ll sum=0,data;
        for(ll i=0;i<n;i++){
            cin >> data ;
            sum+=data;
        }
        ll max_num=0;
        ll chek=0,i=1;
        while(chek<=sum){
            chek+=i;
            if(chek<=sum) max_num++;
            i++;
        }      
        cout << max_num << endl;  
    }
    return 0;
}