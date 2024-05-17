#include<bits/stdc++.h>
using namespace std;
vector<int> parent,rankk,size;

int find_parent(int node){
    return parent[node] =  (node == parent[node]) ? node : find_parent(parent[node]);
}

void union_by_rank(int u,int v){
    int u_parent_of_u = find_parent(u);
    int u_parent_of_v = find_parent(v);
    if(u_parent_of_u == u_parent_of_v) return ;
    if(rankk[u_parent_of_u]>rankk[u_parent_of_v]){
        parent[u_parent_of_v] = u_parent_of_u;
    }
    else if(rankk[u_parent_of_u]<rankk[u_parent_of_v]){
        parent[u_parent_of_u] = u_parent_of_v;
    }
    else{
        parent[u_parent_of_v] = u_parent_of_u;
        rankk[u_parent_of_u]++;
    }
}

void union_by_size(int u,int v){
    int u_parent_of_u = find_parent(u);
    int u_parent_of_v = find_parent(v);
    if(u_parent_of_u == u_parent_of_v) return ;
    if(size[u_parent_of_u]>size[u_parent_of_v]){
        parent[u_parent_of_v] = u_parent_of_u;
        size[u_parent_of_u]+=size[u_parent_of_v];
    }
    else if(size[u_parent_of_u]<=size[u_parent_of_v]){
        parent[u_parent_of_u] = u_parent_of_v;
        size[u_parent_of_v]+=size[u_parent_of_u];
    }
}

int main(){
    int n;cin >> n;
    rankk.resize(n+1,0);
    size.resize(n+1,0);
    parent.resize(n+1);
    for(int i=0;i<=n;i++) parent[i] = i;
    for(int i=0;i<n;i++){
        int u,v;cin >> u >> v;
        union_by_rank(u,v);
        // union_by_size(u,v);
    }
}