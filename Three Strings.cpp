#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;

 cin>>t;

 while(t--){


    string a,b,c;

    cin>>a>>b>>c;

    int  n = a.size();

    int i;
    int flag=1;

    for(i=0;i<n;i++){

        if(c[i]==a[i]||c[i]==b[i]){
            flag=1;

        }
        else{
                flag=0;
            cout<<"NO"<<endl;
            break;
        }
    }
if(flag)
cout<<"YES"<<endl;


    }



return 0;
}

