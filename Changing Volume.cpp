#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){



    int a,b;
    cin>>a>>b;

    if(a==b){
        cout<<0<<endl;

    }

    else{
        int n = abs(a-b);
     int m= n/5;
    n=n%5;
    if(n==3||n==4){
        cout<<(m+2)<<endl;
    }
    else if(!n){
        cout<<m<<endl;
    }
     else{

                cout<<(m+1)<<endl;

     }
    }



    }

return 0;

}

