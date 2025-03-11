#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    bool first = true;
    while (getline(cin, s))
    {
        string ss;
        for (char c : s)
        {
            if (c != ' ')
            {
                ss += c;
            }
        }
        sort(ss.begin(), ss.end());
        if (!first)
            cout << endl;
        cout << ss;
        first = false;
    }
    return 0;
}