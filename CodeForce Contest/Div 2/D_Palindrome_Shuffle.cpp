#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int cnt = 0;
        int cnt2 = 0;
        for (int i = 0,j=s.size()-1; i <= j; i++,j--)
        {
            if(s[i]!=s[j]){
                swap(s[i],s[j]);
                cnt++;
            }
        }
        for (int i = 0; i < s.size()-1; i++)
        {
            if(s[i]>s[i+1]){
            cnt2++;
            }
            break;
        }
        
        cout<<cnt+cnt2<<endl;
    }

    return 0;
}