#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int minimizeArrayValue(vector<int>& nums) {
            int ans=nums[0];
    reverse(nums.begin(),nums.end());
        int sum=nums[0];
        int ct=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]) {
                sum+=nums[i+1];
                ct++;
            }
            else{
                ans=max(ans,(int)ceil((double)(sum)/ct));
                sum=nums[i+1];
                ct=1;
            }
            
        }
         ans=max(ans,(int)ceil((double)(sum)/ct));
        return ans;
    }
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        int n;cin >> n;
         vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        cout << minimizeArrayValue(v) << endl;
    }
    return 0;
}