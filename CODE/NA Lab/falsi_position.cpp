#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double func(double x){
    return 3*x - cos(3.1416*x/180) -1;
}

int main(){
    double a=0;
    double b=1;
    double tmp=0;
    while(func(a)*func(b) > 0){
        a++;
        b++;
    }
    while(1){
        double c=(a*func(b)-b*func(a))/(func(b)-func(a));
        if(c==tmp){
            cout << "Root if the folowing function: "<< c << endl;
            break;
        }
        if((func(a)*func(c))<=0){
            b=c;
        }
        else{
            a=c;
        }
        tmp=c;
    }
}