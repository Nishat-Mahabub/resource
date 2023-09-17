#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &v,int start,int end){
    int pIndex=start;
    int pivot=v[end];
    for(int i=start;i<end;i++){
        if(v[i]<pivot){
            swap(v[pIndex],v[i]);
            pIndex++;
        }
    }
    swap(v[pIndex],v[end]);
    return pIndex;
}

void quicksort(vector<int> &v,int start,int end){
    if(start<end){
        int pIndex=partition(v,start,end);
        quicksort(v,start,pIndex-1);
        quicksort(v,pIndex+1,end);
    }
}

int main(){
    int n;cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    quicksort(v,0,n-1);
    for(int i=0;i<n;i++) cout << v[i] << " ";

}