
#include<bits/stdc++.h>
using namespace std;

int main(){

  int a,b,c,d,k;
     int x,y;
  int t;
  cin>>t;

  while(t--){
    cin>>a>>b>>c>>d>>k;

    x=(a/c);
    if(a%c){
        x++;
    }
    y =(b/d);
    if(b%d){
        y++;
    }

         if(x+y>k){
            cout<<-1<<endl;
         }
           else{
            cout<<k-y<<" "<<y<<endl;
           }

  }
  return 0;

}
