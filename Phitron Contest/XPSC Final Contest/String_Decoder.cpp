#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char c;
        int frq;
        for (int i = 0; i < s.size(); i += 2)
        {
            if (i + 1 >= s.size())
                break;
            c = s[i];
            frq = s[i + 1] - '0';
            for (int i = 0; i < frq; i++)
            {
                cout << c;
            }
        }

        cout << endl;
    }

    return 0;
}