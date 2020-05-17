#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){

int a,b,a1,b1;
cin>>a>>b>>a1>>b1;

a=b-a;
int x= a/(a1+b1);
if(a%(a1+b1))  {
    cout<<-1<<endl;
}
else
cout<<x<<endl;
}




return 0;
}

