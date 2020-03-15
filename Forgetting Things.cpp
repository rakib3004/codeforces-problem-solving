
#include<bits/stdc++.h>
#define o long long int
using namespace std ;


int main(){


   int a,b;


   cin>>a>>b;
     if(a==9&&b==1){
        cout<<9<<" "<<10;
        return 0;
     }

   int d=b-a;
   if(d==1){
    a=a*100+99;
    b=b*100;
   }
   else if(d==0){
    a=a*100+19;
    b=b*100+20;
   }
   else{
    cout<<-1;
    return 0;
   }
    cout<<a<<" "<<b;
  return 0;

}
