#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char>v;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='2'){
            v.push_back(s[i]);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    
    return 0;
}