#include<bits/stdc++.h>
using namespace std;
int main(){
//int t;
//int i;
//
//cin>>t;
//
//while(t--){
//
//
//int n;
//cin>>n;
//if(n==1){
//    cout<<-1<<endl;
//}
//else{
//cout<<2;
// for(i=1;i<n;i++){
//
//    cout<<3;
// }
//  cout<<endl;
//}
//}


int  n;


cin>>n;

int i;

int a[n];
int b[n];
int sum=0;
int y=0;

cin>>a[0];

for(i=1;i<n;i++){
    cin>>a[i];
    y = max(y,a[i-1]);
    a[i] =a[i]+y;
}

for(i=0;i<n;i++){

    cout<<a[i]<<" ";
}



return 0;


}

