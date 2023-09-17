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
    vector<double> v;
    for(int i=0;i<=n;i++){
        v.push_back(lower_limit+i*x);
    }
    double sum=func(v[0])+func(v[n]);
    for(int i=1;i<=n-1;i++){
        sum+=2*func(v[i]);
    }
    cout << sum*x/2 << endl;
}