#include<iostream>
#include<bits/stdc++.h>

using namespace std;

double func(double x){
    return 3*x -cos(3.1416*x/180)-1;
}

int main(){
    double x_0=0;
    double x_1=1;
    while(func(x_1)*func(x_0) > 0){
        x_0++;
        x_1++;
    }
    double tmp_1=x_0,tmp_2=x_1;
    while(1){
        double x=tmp_2-((tmp_2-tmp_1)/(func(tmp_2)-func(tmp_1)))*func(tmp_2);
        tmp_1=tmp_2;
        tmp_2=x;
        if(tmp_1==tmp_2){
            cout << "Root of the following function :" << x << endl;
            break;
        }
    }
}