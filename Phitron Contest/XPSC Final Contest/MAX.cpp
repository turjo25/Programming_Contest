#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    vector<int> v;            
    vector<int> frq(100005, 0); 

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int val;
            cin >> val;
            frq[val]++;
            v.push_back(val);
        }
        else
        {
            if (v.empty())
            {
                cout << "empty"<<endl;
                continue;
            }
            int maxFreq = 0, maxVal = -1;
            for (int i = 0; i < 100005; i++)
            {
                if (frq[i] > maxFreq || (frq[i] == maxFreq && i > maxVal))
                {
                    maxFreq = frq[i];
                    maxVal = i;
                }
            }

            cout << maxVal << endl;

            int eraseCount = max(1, maxFreq / 2);
            frq[maxVal] -= eraseCount;

            int removed = 0;
            vector<int> temp;
            for (int num : v)
            {
                if (num == maxVal && removed < eraseCount)
                {
                    removed++;
                }
                else
                {
                    temp.push_back(num);
                }
            }
            v = temp;
        }
    }

    return 0;
}
