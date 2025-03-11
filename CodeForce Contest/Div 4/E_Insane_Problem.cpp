#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int k,l1,r1,l2,r2;
        cin>>k>>l1>>r1>>l2>>r2;

        int count =0;

        for (long long x = l1; x <= r1; ++x) {
        long long minN = max(0LL, (long long)ceil(log((double)l2 / x) / log(k)));
        long long maxN = (long long)floor(log((double)r2 / x) / log(k));

        if (minN <= maxN) {
            count += (maxN - minN + 1);
        }
    }
    cout<<count<<endl;
    }
    
    return 0;
}