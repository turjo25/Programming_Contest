#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    for (int i = s.size()-1; i >= 0; i--)
    {
        if(s[i] == 'A' && s[i - 1] == 'W'){
            s[i] = 'C';
            s[i-1] = 'A';
        }
    }
    cout<<s<<endl;
    return 0;
}