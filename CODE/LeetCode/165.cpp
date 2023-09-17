#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    string s1,s2;cin >> s1 >> s2;
    int i=0,j=0;
    while(i<s1.size() || j<s2.size()){
        long x=0,y=0;
        while(i<s1.size() && s1[i]!='.'){
            x=x*10 + s1[i]-'0';
            i++;
        }
        while(j<s2.size() && s2[j]!='.'){
            y=y*10 + s2[j]-'0';
            j++;
        }
        cout << x << endl << y << endl;
        // if(x>y) return 1;
        // else return -1;
        i++;j++;
    }
    return 0;

    return 0;
}