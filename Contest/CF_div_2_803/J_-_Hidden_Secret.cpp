#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    ll k=1;
    cin.ignore();
    while(k<=t){
        string s1;
        getline(cin,s1);
        string s2;
        getline(cin,s2);
       
        string as1,as2;
        // cout << s1 << endl << s2 << endl;

        for(ll i=0;i<s1.size();i++){
            if(s1[i]!=32){
                if(s1[i]>=65 && s1[i]<=90){
                    as1+=(char) (s1[i]+32);
                }
                else{
                    as1+=(s1[i]);
                }
            }
        }
        for(ll i=0;i<s2.size();i++){
            if(s2[i]!=' '){
                if(s2[i]>=65 && s2[i]<=90){
                    as2+=(char) (s2[i]+32);
                }
                else{
                    as2+=(s2[i]);
                }
            }
        }
        sort(as1.begin(),as1.end());
        sort(as2.begin(),as2.end());
        cout << "Case " << k << ": ";
        if(as1==as2) cout << "Yes" << endl;
        else cout << "No" << endl;
        k++;
    }
    return 0;
}