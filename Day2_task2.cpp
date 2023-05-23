#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define test int tc; cin>> tc; while(tc--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
vector<int>adj[10000];

int main(){

    optimize();
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        
    }
    for(int i=1;i<=n;i++){
        for(auto e: adj[i]){
            cout<<e<<" ";
        }
        cout<<endl;
    }

    
return 0;
}
