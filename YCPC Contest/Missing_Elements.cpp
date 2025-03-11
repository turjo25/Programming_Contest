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
        vector<int> freq(n + 1, 0);
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (freq[i] == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}