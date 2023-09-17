#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double func(double x){
    return 3*x -cos(3.1416*x/180)-1;
}

double d_func(double x){
    return sin(3.1416*x/180) +3;
}

int main(){
    double a=0;
    double b=1;
    double tmp;
    double x=a;
    while(func(a)*func(b)>0){
        a++,b++;
    }
    while(1){
        tmp=x;
        x=tmp- func(tmp)/d_func(tmp);
        if(tmp==x){
            cout <<"The root of the following function" << x << endl;
            break;
        }
        cout << " this << " << x << endl;
    }

}