#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q;
    cin >> n >> q;
    vector<ll> pre(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + (i + 2) / 3;
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        if (l < 1 || r > n || l > r) {
            continue;
        }
        cout << pre[r] - pre[l - 1] << endl;
    }

    return 0;
}