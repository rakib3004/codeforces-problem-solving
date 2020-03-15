
#include<bits/stdc++.h>
using namespace std;

int main(){

int n,d;
cin>>n>>d;
if(n>1 && d==0){
    cout<<"No solution";
        return 0;
}
else{
    cout<<d;
    for(int i=1;i<n;i++){
        cout<<0;
    }
}

return 0;
}
