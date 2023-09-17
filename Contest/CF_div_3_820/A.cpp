#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
bool equal(vector<int> &v){
        set<int> s;
        for(auto x:v){
            cout << x << " ";
            if(x!=0) s.insert(x);
        }
        return s.size()==1;
    }
    
    bool equalFrequency(string word) {
        vector<int> v;
        map<char,int> mp;
        for(int i=0;i<word.size();i++){
            mp[word[i]]++;
        }
        for(auto x:mp) v.push_back(x.second);
        bool ans=false;
        for(int i=0;i<v.size();i++){
            v[i]--;
            if(equal(v)) {
                ans=true;
                break;
            }
            v[i]++;
        }
        return true;
    }
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        string word;cin >> word;
        equalFrequency(word);
    }
    return 0;
}