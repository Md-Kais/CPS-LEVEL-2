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
bool vis[1000] = {false};
vector<int>adj[1000];
void dfs(int source)
{
    cout<<source<<" ";
    vis[source] = 1;
    for (auto adjacent : adj[source])
    {
        if (vis[adjacent] == 0)
        {
            dfs(adjacent);
        }
    }
    return;
}
int main()
{

    optimize();

    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    return 0;
}
