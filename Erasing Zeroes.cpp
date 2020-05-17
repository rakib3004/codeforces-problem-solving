#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;

 cin>>t;

 while(t--){

char s[100];

cin>>s;


int n=strlen(s);

int i,a=-1,b=0;

for(i=0;i<n;i++){

   if(s[i]=='1'){
    a=i;
    break;
   }
}

if(a==-1){
    cout<<0<<endl;
}else{


for(i=n-1;i>=0;i--){
    if(s[i]=='1'){
    b=i;
    break;
   }
}
int count=0;

for(i=a;i<=b;i++){

   if(s[i]=='0'){
    count++;
   }
}
cout<<count<<endl;

 }


}

return 0;
}

