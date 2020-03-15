
#include<bits/stdc++.h>
#include<algorithm>
#define o long long int
using namespace std;

    int main(){

 int  t,str,intx,exp,counter=0,a=0,s,i;
 cin>>t;
 while(t--){

 cin>>str>>intx>>exp;
a=(str+exp+1)-intx;
a/=2;
counter= max(0,min(exp+1,a));
cout<<counter<<endl;
 }
return 0;
}
