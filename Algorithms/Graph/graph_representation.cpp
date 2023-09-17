#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> v[N];
bool visited[N];

void dfs(int vertex){
    visited[vertex]=true;
    cout << vertex << endl;
    for(auto child : v[vertex]){
        if(visited[child]){
            cout <<"Visited Child : "<< child << endl;
             continue;
        }
        dfs(child);
    }
}

int main(){
    int numVertex;
    int numEdge;
    cin >> numVertex >> numEdge;
    for(int i=0;i<numEdge;i++){
        int v1,v2;cin >> v1 >> v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }
    for(int i=1;i<=numVertex;i++){
        cout << i << "-->> ";
        for(auto x : v[i]) cout << x <<" ";
        cout << endl;
    }
    dfs(1);
}