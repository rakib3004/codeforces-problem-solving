#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;

 cin>>t;

 while(t--){


    int a,b;

    cin>>a>>b;
    int c= b-a;

    if(c==0){
        cout<<0<<endl;
    }
    else if(c>0){
        if(c%2){
        cout<<1<<endl;
        }
        else{
         cout<<2<<endl;

        }
    }
    else{

      if(c%2){
        cout<<2<<endl;
        }
        else{
         cout<<1<<endl;

        }


    }
 }


return 0;
}

