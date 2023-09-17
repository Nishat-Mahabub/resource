#include<bits/stdc++.h>
using namespace std;

vector<int> nums;
int target;

// int main(){
//     int x;cin >> x;
//     for(int i=0;i<x;i++){
//         int data;cin >> data;
//         nums.push_back(data);
//     }
//     cin >> target;
//     vector<pair<int,int>> v;
//     for(int i=0;i<nums.size();i++){
//         v.push_back({nums[i],i});
//     }
//     sort(v.begin(),v.end());
//     int low=0,high=nums.size()-1;
//     int sum;
//     while(low<high){
//         sum=v[low].first+v[high].first;
//         if(sum==target){
//             cout << v[low].second << " " << v[high].second << endl;
//             break;
//         }
//         else if(sum>target) high--;
//         else low++;
//     }
// }

int main(){
    int x;cin >> x;
    vector<int> nums;
    for(int i=0;i<x;i++){
        int data;cin >> data;
        nums.push_back(data);
    }
    int target;
    cin >> target;
    unordered_map<int,int> mp;
    int a,b;
    for(int i=0;i<nums.size();i++){
        if(mp.find(target-nums[i])!=mp.end()){
            a=i;
            b=mp[target-nums[i]];
            break;
        }
        mp[nums[i]]=i;
    }
    return a,b;
}