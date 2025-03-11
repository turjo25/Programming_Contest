#include <bits/stdc++.h>
using namespace std;
vector<pair<string,int>> v;
bool comp(pair<string, int> a, pair<string, int> b) {
    return a.second < b.second;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int len = s.size();

        v.push_back(make_pair(s, len));
    }
    sort(v.begin(),v.end(),comp);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first;
    }
    return 0;
}