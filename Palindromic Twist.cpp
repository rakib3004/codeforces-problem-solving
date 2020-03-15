
#include<bits/stdc++.h>
#define o long long int
using namespace std ;
int main()
{




       int n;
            int s;

       cin>>n;
int p;
string k;

           while(n--){

int i;
            cin>>p;
            cin>>k;



             for(i=0;i<(p/2);i++){

                   if((k[i]==k[p-i-1])||(k[i]==k[p-i-1]+2)||(k[i]==k[p-i-1]-2)){

                         continue;
                   }
                   else{
                    cout<<"NO"<<endl;
                   goto J;
                   }

           }

                           cout<<"YES"<<endl;
                          J:
                       s=1129;

       }


     return 0;

}
