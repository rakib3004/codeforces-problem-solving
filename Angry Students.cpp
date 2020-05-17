#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    string s;
    cin>>s;

    int count=0;
    int max1=0;
    int i;
      bool b=false ;
    for(i=0;i<n;i++){
        if(s[i]=='A'&&b==false){
            b= true;
        }
        else if(s[i]=='A'&&b==true){
              max1 = max(count,max1);
              count=0;
        }
       else if((s[i]=='P')&&(b==true))  {
            count++;

           }
           else{
            continue;
           }
    }
    cout<<max(count,max1)<<endl;


}




return 0;
}

