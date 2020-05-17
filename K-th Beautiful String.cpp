#include<bits/stdc++.h>
using namespace std;
 int main(){
long long int t;
long long int i;

cin>>t;
long long int e=0;


while(t--){

long long int n,k;
cin>>n>>k;
k--;
string str;

for(i=0;i<n;i++){

str=str+"a";
}

for(i=0;i<=n;i++){

     e = (i*(i+1))/2;
if(e>k){
    i--;
         e = (i*(i+1))/2;
         break;

}

}



long long int p = k-e;
long long int x= n-i-2;
long long int y =n-p-1;

str[x]='b';
str[y]='b';
//cout<<x<<" "<<y;
cout<<str<<endl;

}
return 0;


}

