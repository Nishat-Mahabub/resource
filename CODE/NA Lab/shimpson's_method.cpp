#include<bits/stdc++.h>
using namespace std;

double func(double x){
    return 1/(1+x*x);
}

int main(){
    double lower_limit=0;
    double upper_limit=1;
    double n=6;
    double x=(upper_limit-lower_limit)/n;
    vector<double> v0,v2,v4;
    for(int i=0;i<=n;i++){
        if(i==0 || i==10) v0.push_back(lower_limit+i*x);
        if(i%2==0) v2.push_back(lower_limit+i*x);
        else v4.push_back(lower_limit+i*x);
    }
    double sum=func(v0[0])+func(v0[1]);
    for(int i=2;i<v2.size();i+=2){
        sum+=2*func(v2[i]);
    }
    for(int i=1;i<v4.size();i+=2){
        sum+=4*func(v4[i]);
    }
    cout << "This" << endl;
    cout << sum*x/3 << endl;
}