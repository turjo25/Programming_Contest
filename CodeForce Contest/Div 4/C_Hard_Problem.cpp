#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        long long int m,a,b,c;
        cin>>m>>a>>b>>c;

        long long int s1=0;
        long long int s2=0;

        if(m<a){
            s1=(a-m)+b+c;
            cout<<s1;
        }else if(m==a){
            cout<<b+c;
        }else{
            s2=a+b+c;
            cout<<s2;
        }
        cout<<endl;
    }
    
    return 0;
}