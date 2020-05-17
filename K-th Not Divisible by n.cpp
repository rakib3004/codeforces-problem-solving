#include<bits/stdc++.h>
using namespace std;
 int main()
{


    long long int t;
    cin>>t;
    while(t--)
    {
       long long int n,k;

       cin>>n>>k;

       long long int p = (n*k)/(n-1);
       if(p%n==0){
        p--;
       }
       cout<<p<<endl;
    }
    return 0;
}

