#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define test int tc; cin>> tc; while(tc--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
bool vis[100];
vector<ll>adj[101];
ll reactor=0;
void dfs(int source){
    vis[source]=1;
    reactor++;
    for(auto adjacent: adj[source]){
        if(vis[adjacent]==0)
            dfs(adjacent);
    }
    
}
int main(){

    optimize();
    int nodes, edge;
    cin>>nodes>>edge;

    for(int i=0;i<edge;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=nodes;i++){
        if(vis[i]==0){
            dfs(i);
            reactor--;
        }
            
    }
    //cout<<reactor<<endl;

    cout<<(1LL<<reactor)<<endl;
return 0;
}
