#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int s = 0; 
        if (n >= 2) {
            s = a[n - 1] + a[n - 2] - 1;
            for (int j = n - 3; j >= 0; j--) {
                s = (s + a[j]) - 1;
            }
            cout << s << endl;
        }else{
            cout<<a[0]<<endl;
        }

    }
    
    return 0;
}