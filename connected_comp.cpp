#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int mx = 1e6;
vector<int> adj[mx];
bool vis[mx];
int dfs(int u)
{
    vis[u] = 1;
    for (auto v : adj[u])
    {

        if (vis[v] == 0)
        {
            dfs(v);
        }
    }
    return 1;
}

int main()
{

    // optimize();

    int node, vertex;
    cin >> node >> vertex;
    for (int i = 0; i < vertex; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans = 0;
    for (int i = 1; i <= node; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i);
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
