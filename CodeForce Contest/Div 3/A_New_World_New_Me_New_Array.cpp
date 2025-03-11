#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,p;
        cin>>n>>k>>p;
        int lowrange = n*(-p);
        int highrange = n*p;
        if(k<lowrange || k>highrange){
            cout<<-1<<endl;
        }else{
            int operation = abs(k)/p;
            if(p*operation == abs(k))
            cout<<operation<<endl;
            else
            cout<<operation+1<<endl;
        }
    }
    
    return 0;
}