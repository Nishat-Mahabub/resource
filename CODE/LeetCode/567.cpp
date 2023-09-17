#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    string s1,s2;cin >> s1 >> s2;
    bool flag=false;
    int s1s=s1.size();
    int s2s=s2.size();
    int ct=0;
    //unordered_map<ll,ll> mp;
    sort(s1.begin(),s1.end());
    int l=0,r=s1s-1;
        while(r<s2s){
    string ss;
            ct=0;
            for(int j=l;j<=r;j++){
                ss.push_back(s2[j]);
                // for(int i=0;i<s1s;i++){
                //     if(s2[j]==s1[i]){
                //         ct++;
                //     }
                // }
            }
            cout << ss << endl;
            sort(ss.begin(),ss.end());
            if(ss==s1){
                 flag=true; 
            }
            l++,r++;
        }
    if(flag) cout << " true" << endl;
    else cout << " false" << endl;
    return 0;
    //"abcdxabcde"
    //"abcdeabcdx"
}