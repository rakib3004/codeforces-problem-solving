#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define l 998244353


void iitcpc(){
long long int a,b,c,m,n,p,q,r,x,y,z,i,j,k;
long long int sum=0;
bool isIt=false;
string s;
double d;

n=444;

j=0;

cin>>p>>a>>b;
int ab[p];


 c= a+b;



for(i=0;i<p;i++){
cin>>ab[i];
if(ab[i]<=c){
    j++;
}

}


cout<<j<<endl;


return;
}

int main(){


int n,m;


cin>>n>>m;

int a,b;

int sum=0;




int i=0;
if(m==1){
    cin>>a;

    for(i=1;i<=n;i++){
    if(i%a==0){
        sum++;
    }

}


}

else{
    cin>>a>>b;
    for(i=1;i<=n;i++){

if(i%a==0||i%b==0){
        sum++;
    }
}

}


cout<<sum<<endl;
return 0;
}



