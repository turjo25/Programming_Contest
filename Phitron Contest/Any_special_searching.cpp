#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
    int t;
    cin>>t;
    while (t--)
    {
        int s;
        cin>>s;
        int idx = 0;
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum = sum +arr[i];
            if(sum>=s){
                idx = i;
                break;
            }
        }
        if(idx==0){
            cout<<"-1"<<endl;
        }else{
            cout<<idx<<endl;
        }
        
    }
    
    return 0;
}