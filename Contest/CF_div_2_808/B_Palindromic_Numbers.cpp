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
        string s;cin >> s;
        vector<int> ans;
        if(s[0]!='9'){
            string prm=string(n,'9');
            for(int i=prm.size()-1;i>=0;i--){
                ans.push_back((prm[i]-s[i]));
            }
        }
        else{
            string prm=string(n+1,'1');
            int data;
            bool carry =false;
            for(int i=prm.size()-1;i>0;i--){
                int div=s[i-1]-48;
                if(carry) div++;
                if(div==10){
                     carry=true;
                     ans.push_back(1);
                }
                else if(div>1){
                    data=11-div;
                    ans.push_back(data);
                    carry=true;
                }
                else{
                    ans.push_back(1-div);
                    carry =false;
                }
            }
        }
        for(auto x=ans.rbegin();x!=ans.rend();x++ ) cout << *x;
        cout << endl;
    }
    return 0;
}