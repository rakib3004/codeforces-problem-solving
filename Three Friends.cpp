
#include<bits/stdc++.h>
using namespace std;

int main(){


int t;
cin>>t;

while(t--){
 long long int a,b,c,a1,b1,c1;

cin>>a>>b>>c;

 long long int x = abs(a-b)+abs(b-c)+abs(c-a);
 long long int y;
int d[3] = {0,1,-1};

int i,j,k;

for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   for(k=0;k<3;k++){
    a1 = a+d[i];
    b1 = b+d[j];
    c1 = c+d[k];
    y=   abs(a1-b1)+abs(b1-c1)+abs(c1-a1);

    x = min(x,y);
}

}

}
cout<<x<<endl;;

}
return 0;
}
