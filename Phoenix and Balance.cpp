#include<bits/stdc++.h>
using namespace std;
 long long  int n,x,aSite,bSite;
 int i;
int main(){


int t;
cin>>t;
while(t--){


    cin>>n;

 aSite  = pow(2,n);

 int m = n/2;
 for(i=1;i<m;i++){

    aSite = aSite + pow(2,i);
 }
 bSite = 0;
 for(i=m;i<n;i++){
    bSite = bSite+pow(2,i);
 }
    cout<<(aSite-bSite)<<endl;
}
return 0;
}

