#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    cin>>x;
    int count = 0;
    for (long long int i = 1; i*i <= x; i++)
    {
        if(x%i==0){
          count++;
          if (i != x / i) { 
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}