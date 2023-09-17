#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    auto it=ms.find(1);
    it++;
    it++;
    cout << *it << endl;
}