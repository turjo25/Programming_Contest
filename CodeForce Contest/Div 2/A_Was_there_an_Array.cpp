#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n<3){
            cout << "NO" << endl;
            continue;
        }
        vector<int> b(n - 2);
        for (int i = 0; i < n - 2; i++)
        {
            cin >> b[i];
        }
        if(b.empty()){
            cout << "NO" << endl;
            continue;
        }
        bool flag = true;
        for (int i = 0; i < n - 4; i++)
        {
            if (b[i] == 1 && b[i + 1] == 0 && b[i + 2] == 1)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}