#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> dp(1005, -1);
bool sum(long long n, long long current)
{

    if (current == n)
        return true;
    if (current > n)
        return false;
    if (dp[current] != -1)
        return dp[current];
    return dp[current] = sum(n, current + 4) || sum(n, current + 3);
}

int main()
{
    long long n;
    cin >> n;
    if (sum(n, 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}