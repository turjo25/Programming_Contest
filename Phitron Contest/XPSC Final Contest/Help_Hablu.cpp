#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        ll n = s.size();
        ll m = t.size();
        ll dp[n + 1][m + 1];

        memset(dp, 0, sizeof(dp));

        for (int i = 0; i <= n; i++)
            dp[i][0] = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                dp[i][j] = dp[i - 1][j]; 
                if (s[i - 1] == t[j - 1])
                {
                    dp[i][j] += dp[i - 1][j - 1]; 
                }
            }
        }
        cout << dp[n][m] << endl;
    }

    return 0;
}
