
#include<bits/stdc++.h>
using namespace std;

       bool cal(int iterator){

       int a[7]={0};
       int n=0;
       while(iterator!=0){
         a[n] = iterator%10;
         iterator = iterator/10;
         n++;
       }

       sort(a,a+n);
       for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            continue;
        }
        else {
            return false;
        }
       }
       return true;

       }
int main(){
    bool p;
int l,r;

cin>>l>>r;

int i;

for(i=l;i<=r;i++){

  p =cal(i);
  if(p==true){
    cout<<i;
    return 0;
  }
}
cout<<-1;
  return 0;

}
