
#include<bits/stdc++.h>
using namespace std;

int main(){


int t;
cin>>t;

while(t--){

 int n,m;

 cin>>n>>m;

 int a[n];

 int i;
 int sum=0;


 for(i=0;i<n;i++){

    cin>>a[i];
    sum = sum + a[i];

 }


cout<<min(sum,m)<<endl;


}

return 0;
}

