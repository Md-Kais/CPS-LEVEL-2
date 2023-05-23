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
ll a, b, c, d, e, fg;
ll f[12345] = {0};

int fn(int n)
{
    if (n == 0)
    {
        f[0] = a;
        return a;
    }

    if (n == 1)
    {
        f[1] = b;
        return b;
    }
    if (n == 2)
    {
        f[2] = c;
        return c;
    }
    if (n == 3)
    {
        f[3] = d;
        return d;
    }
    if (n == 4)
    {
        f[4] = e;
        return e;
    }
    if (n == 5)
    {
        f[5] = fg;
        return fg;
    }
    else if (n > 5)
    {
        ll ans = (f[n - 1] + f[n - 2] + f[n - 3] + f[n - 4] + f[n - 5] + f[n - 6]);
        ans %= 10000007;
        f[n] = ans;
        return f[n];
    }
}
int main()
{
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &fg, &n);
        ll ans = 0;
        for (int i = 0; i <= n; i++)
        {
            ans = fn(i);
        }
        // cout << ans << endl;

        printf("Case %d: %d\n", caseno, ans % 10000007);
        f[12345] = {0};
    }
    return 0;
}
// 5333347
// 2493649