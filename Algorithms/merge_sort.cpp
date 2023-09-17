#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &left,vector<int> &right,vector<int> &v){
    int ll=left.size();
    int rl=right.size();
    int i=0,j=0,k=0;
    while(i < ll && j < rl){
        if(left[i] < right[j]){
            v[k]=left[i];
            i++;
        }
        else{
            v[k]=right[j];
            j++;
        }
        k++;
    }
    while(i < ll){
        v[k]=left[i];
        i++,k++;
    }
    while(j< rl){
        v[k]=right[j];
        j++,k++;
    }
}

void mergesort(vector<int> &v){
    int len = v.size();
    if(len<2) return;
    int mid=len/2;
    vector<int> left(mid);
    vector<int> right(len-mid);
    for(int i=0;i<mid;i++) left[i]=v[i];
    for(int i=mid;i<len;i++) right[i-mid]=v[i];
    mergesort(left);
    mergesort(right);
    merge(left,right,v);

}

int main(){
    int n;cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    mergesort(v);
    for(int i=0;i<n;i++) cout << v[i] << " ";
}