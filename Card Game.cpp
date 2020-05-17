
#include<bits/stdc++.h>
using namespace std;

int main(){
int t;

cin>>t;


while(t--){

    int n,k1,k2;
    cin>>n>>k1>>k2;


int a[k1],b[k2];
int i;

for(i=0;i<k1;i++){
    cin>>a[i];
}

for(i=0;i<k2;i++){
    cin>>b[i];
}

sort(a,a+k1);
sort(b,b+k2);
if(a[k1-1]>b[k2-1]){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}


}


return 0;
}
