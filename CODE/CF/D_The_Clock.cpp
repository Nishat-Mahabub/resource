#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

bool chek(string s1,string s2){
    // cout << s1 << " " << s2 << endl;
    if(s1.size()==1){
        reverse(s1.begin(),s1.end());
        s1.push_back('0');
        reverse(s1.begin(),s1.end());
    }
    if(s2.size()==1){
        reverse(s2.begin(),s2.end());
        s2.push_back('0');
        reverse(s2.begin(),s2.end());
    }
    
    reverse(s1.begin(),s1.end());
    // if(s1==s2) cout << s1 << " " << s2 << endl;
    if(s1==s2) return 1;
    else return 0;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll h,m,x;char c;
        ll ct=0;
        cin >> h >> c >> m >> x;
        ll tmph=h,tmpm=m;
        ll hh,mm;
        hh = x/60;
        mm =x%60;
        string s1=to_string(h);
        string s2=to_string(m);
        if(chek(s1,s2)) ct++;
        // cout << ct << endl;
        m+=mm;
        h+=hh;
        // cout << m << " " << h << endl;
        if(m>=60){
            h++;
            m=m%60;
        }
        if(h>23) h=h%24;
        // cout << hh <<" "<< mm << endl;
        // cout << h << " " << m << endl;
        while(tmph!=h || tmpm!=m){
            // cout << ct << endl;
            // cout << "/This" << endl;
            string s1=to_string(h);
            string s2=to_string(m);
            if(chek(s1,s2)) ct++;
            m+=mm;
            h+=hh;
            if(m>=60){
                h++;
                m=m%60;
            }
            if(h>23) h=h%24;
        }
        // cout << "Thislll" << endl;
        cout << ct << endl;
    }
    return 0;
}