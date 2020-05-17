#include<bits/stdc++.h>
using namespace std;
 int main(){
int i;

int n;


cin>>n;

int a[n+1];
a[0]=0;

for(i=1;i<=n;i++){

    cin>>a[i];
}
int time=0;

for(i=1;i<=n;i++){


if(a[i]-a[i-1]>15){
    time = a[i-1]+15;
    break;
}
}
if(!time){
        if((a[n]+15)<90)
    time = a[n]+15;
else
    time = 90;
}

cout<<time;

return 0;
}

