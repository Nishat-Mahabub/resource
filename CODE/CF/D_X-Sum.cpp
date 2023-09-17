#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll m,n;cin >> m >> n;
        ll arr[m][n];
        for(ll i=0;i<m;i++){
            for(ll j=0;j<n;j++){
                cin >> arr[i][j];
            }
        }
        cout << "This";
        vector<ll> v1,v2;
        for(ll i=0;i<n;i++){
            ll row=0,col=i;
            ll sum=0;
            while(row<m && col<n){
                sum+=arr[row][col];
                row++;col++;
            }
            v1.push_back(sum);
        }
        for(ll i=0;i<m;i++){
            ll row=i,col=0;
            ll sum=0;
            while(row<m && col<n){
                sum+=arr[row][col];
                row++;col++;
            }
            v1.push_back(sum);
        }
        for(ll i=0;i<n;i++){
            ll row=0,col=i;
            ll sum=0;
            while(row<m && col>=0){
                sum+=arr[row][col];
                row++;col--;
            }
            v2.push_back(sum);
        }
        for(ll i=0;i<m;i++){
            ll row=i,col=n-1;
            ll sum=0;
            while(row<m && col>=0){
                sum+=arr[row][col];
                row++;col--;
            }
            v2.push_back(sum);
        }
        for(ll i=0;i<v1.size();i++){
            cout << v1[i] << " ";
        }
        cout << endl;
        for(ll i=0;i<v2.size();i++){
            cout << v2[i] << " ";
        }
    }
    return 0;
}