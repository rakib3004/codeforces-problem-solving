#include<bits/stdc++.h>
using namespace std;

int main(){


int m,n;

cin>>m>>n;

string a[m],b[n];

int i;

for(i=0;i<m;i++){
    cin>>a[i];
}

for(i=0;i<n;i++){
    cin>>b[i];
}


int x,p;

cin>>x;

for(i=0;i<x;i++){

cin>>p;

p--;
cout<<a[p%m]<<b[p%n]<<endl;


}


return 0;
}


