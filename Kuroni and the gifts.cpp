#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;

 cin>>t;

 while(t--){

int n;

cin>>n;

int a[n],b[n];


int i;


for (i=0;i<n;i++){

    cin>>a[i];

}
for (i=0;i<n;i++){

    cin>>b[i];

}

sort(a,a+n);
sort(b,b+n);

for (i=0;i<n-1;i++){

    cout<<a[i]<<" ";

}

 cout<<a[n-1]<<endl;

 for (i=0;i<n-1;i++){

    cout<<b[i]<<" ";

}

 cout<<b[n-1]<<endl;





    }



return 0;
}

