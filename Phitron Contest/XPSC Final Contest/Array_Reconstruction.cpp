#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
         ll sum = 0;
        for (int i = 0; i < n-2; i++)
        {
            cin >> a[i];
        }
         ll lostsum;
        cin>>lostsum;
        for (int i = 0; i < n-2; i++)
        {
            sum = sum + a[i];
        }
        ll newsum = lostsum - sum;
        cout<<newsum+1<<endl;
    }

    return 0;
}