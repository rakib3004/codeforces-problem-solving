
#include<bits/stdc++.h>
using namespace std;



int main(){


int t;

cin>>t;
int i,j;

while(t--){

    int n;

    cin>>n;
int a[n];

int i;


for(i=0;i<n;i++){

    cin>>a[i];

}

sort(a,a+n);

int count=1;

for(i=1;i<n;i++){
 if(a[i]!=a[i-1]){
    count++;
 }
}
cout<<count<<endl;
}
return 0;
}
