#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<ll>a(n);
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    
    sort(a.begin(), a.end()); 

    ll sum = 0;
    ll val = LLONG_MAX; 

    for (int i = n - 1; i >= 0; i--) { 
        if (a[i] >= val) {
            a[i] = val - 1; 
        }
        
        if (a[i] > 0) { 
            sum += a[i];
            val = a[i]; 
        }
    }

    cout << sum << endl;
    return 0;
}