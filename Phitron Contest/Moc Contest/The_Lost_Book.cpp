#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll book[n];
    for (ll i = 0; i < n; i++)
    {
       cin>>book[i];
    }
    ll f;
    cin>>f;
    ll idx;
    bool find = false;
    for (ll i = 0; i < n; i++)
    {
       if(f == book[i]){
        find = true;
        idx = i;
        break;
       }
    }
    if(find){
        cout<<idx<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}