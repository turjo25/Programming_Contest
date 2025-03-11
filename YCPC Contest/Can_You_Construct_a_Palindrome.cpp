#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (char ch : s)
    {
        freq[ch - 'a']++;
    }
    int codd = 0;
    for (int fn : freq)
    {
        if (fn % 2 != 0)
        {
            codd++;
        }
    }
    if (codd <= k + 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}