#include<bits/stdc++.h>
using namespace std;
vector<double> v; 
//F(x)=3x-cos(x)-1
double func(double x){
    return (3*x) - cos((x*3.1416)/180) -1;
}
// root search
bool search(double c){
    for(int i=0;i<v.size();i++){
        if(c==v[i]){
            return true;
        }
    }
    return false;
}

int main(){
    //cout << func(0.5) << endl;
    double a=0;
    double b=1;
    while(func(a)*func(b) > 0){
        a++;
        b++;
    }
    while(1){
        double c=(a+b)/2;
        if(search(c)){
            cout << "Root if the folowing function: "<< c << endl;
            break;
        }
        if((func(a)*func(c))<=0){
            b=c;
        }
        else{
            a=c;
        }
        v.push_back(c);
    }
}