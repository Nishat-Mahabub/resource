#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

    bool sumOfNumberAndReverse(int num) {
        for(int i=1;i<=num;i++){
            string ss=to_string(i);
            reverse(ss.begin(),ss.end());
            int number=stoi(ss);
            if(i+number==num) return true;
        }
        return false;
    }

int countDistinctIntegers(vector<int>& nums) {
        set<int> s;
        for(ll i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            string ss=to_string(nums[i]);
            reverse(ss.begin(),ss.end());
            int num=stoi(ss);
            s.insert(num);
        }
        return s.size();
    }

int findMaxK(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int data;cin >> data;
            if(data>0)v.push_back(data);
            else mp[data]++;;
        }
        sort(v.rbegin(),v.rend());
        for(auto x: v) cout << x << " ";
        for(int i=0;i<v.size();i++){
            if(mp.find(-v[i])!=mp.end()){
                return v[i];
            }
        }
        return -1;
    }
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>> v[i];
        cout << endl << countDistinctIntegers(v);
    }
    return 0;
}