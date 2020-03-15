
#include<bits/stdc++.h>
#define o long long int
using namespace std ;
int main()
{


        int a,b,c;

        cin>>a>>b>>c;

        int p,q;

        p=c/(b*2);
        q=c%(b*2);
        if(q) {
            p++;
        }

        string apk;

        if(c%2){
            apk ='L';
        }
        else{
            apk ='R';

        }
        if(!q){
            q=b;
        }
        else{
            q=(q/2)+(q%2) ;

        }
        cout<<p<<" "<<q<<" "<<apk;



    return 0;
}

