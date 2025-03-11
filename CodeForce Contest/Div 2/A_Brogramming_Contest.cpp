#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        if (s[0] == '1')
            ans++;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1' && s[i - 1] != '1')
                ans++;
            else if (s[i] == '0' && s[i - 1] != '0')
                ans++;

        }
        cout << ans << endl;
    }

    return 0;
}