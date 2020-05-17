#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
int i;

cin>>t;

while(t--){

int a,b;
cin>>a>>b;

int c= a%b;
if(a%b==0){
    cout<<0<<endl;
}
else{

    cout<<(b-c)<<endl;
}

}
return 0;


}
