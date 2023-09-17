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
        string p1,p2;
        ll x=s.size();
        bool flag=true;
        if(s[0]=='2') p1+='2';
        else{
            p1+=s[x-4];
            p1+=s[x-3];
            p1+=s[x-2];
            p1+=s[x-1];
            flag=false;
        }
        if(s[1]=='0' && flag) p1+='0';
        else if(flag){
            p1+=s[x-3];
            p1+=s[x-2];
            p1+=s[x-1];
            flag=false;
        }
        if(s[2]=='2'&& flag) p1+='2';
        else if(flag){
            p1+=s[x-2];
            p1+=s[x-1];
            flag=false;
        }
        if(s[3]=='0'&& flag) p1+='0';
        else if(flag){
            p1+=s[x-1];
        }

        // last part
        flag=true;
        if(s[x-1]=='0') p2+='0';
        else{
            p2+=s[3];
            p2+=s[2];
            p2+=s[1];
            p2+=s[0];
            flag=false;
        }
        if(s[x-2]=='2'&& flag) p2+='2';
        else if(flag){

            p2+=s[2];
            p2+=s[1];
            p2+=s[0];
            flag=false;
        }
        if(s[x-3]=='0'&& flag) p2+='0';
        else if(flag){
            p2+=s[1];
            p2+=s[0];
            flag=false;
        }
        if(s[x-4]=='2'&& flag) p2+='2';
        else if(flag){
            p2+=s[0];
        }
        reverse(p2.begin(),p2.end());
        // cout << p1 << " " << p2 << endl;
        if(p1=="2020" || p2=="2020") cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}