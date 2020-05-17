#include<bits/stdc++.h>
using namespace std;

int main(){


int t;
cin>>t;

while(t--){
int i;

 int n;

 cin>>n;

 if(n%2){
    cout<<7;
    n=n-3;
    n=n/2;
    for(i=0;i<n;i++){
        cout<<1;
    }
    cout<<endl;
 }
 else{
    n=n/2;
    for(i=0;i<n;i++){
        cout<<1;
    }
    cout<<endl;


 }
}

return 0;
}
