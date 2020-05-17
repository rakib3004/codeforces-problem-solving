#include<bits/stdc++.h>
using namespace std;
int main(){


int t;
cin>>t;
while(t--){


 int n;

 cin>>n;
int p=1;
int c;
int counter=0;
int i=0;
int a[6]={0};
while(n!=0){
      c=n%10;
      if(c){
         a[i]=c*p;
         i++;
      }

      p=p*10;
    n=n/10;

    }
    cout<<i<<endl;
for(int j=0;j<i;j++){
    cout<<a[j]<<" ";
}
cout<<endl;
}
return 0;
}

