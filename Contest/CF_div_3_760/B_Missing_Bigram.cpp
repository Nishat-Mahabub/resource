#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin>> n;
        cin.ignore();
        string s;
        getline(cin,s);
        string ns;
            ns.push_back(s[0]); 
            ns.push_back(s[1]);
            for(int i=2;i<s.size();i++){
                if(s[i]==' ') continue;
                if(s[i]==ns[ns.size()-1]){
                    i++;
                    ns.push_back(s[i]);
                }
                else{
                    ns.push_back(s[i]);
                    i++;
                    ns.push_back(s[i]);
                }

            } 
            if(ns.size()==n) cout << ns << endl;
            else cout << ns << 'a' << endl;

        
    }
    return 0;
}