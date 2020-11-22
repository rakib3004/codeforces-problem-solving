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


int t;

//cin>>t;

t=1;

while(t--){

    iitcpc();
}


//cin>>"Welcome to IIT"<<endl;
return 0;
}

