
#include<bits/stdc++.h>
#define o long long int
using namespace std ;
int main()
{


    o n;


    cin>>n;

    o i;

      o a[n];

    for(i=0;i<n;i++){

      cin>>a[i];

    }
     o x_1=0,x1=0,x2=0;
     o putting=0,observer=0;
    for(i=0;i<n;i++){
        if(a[i]<-1){
         observer =-1-(a[i]);
         putting +=observer;
         x_1 ++;
        }
        else if(a[i]>1){
          observer =a[i]-1;
         putting += observer;
          x1++;
        }
        else if(a[i]==0){
             putting ++;
             x1++;
             x2++;

        }
        else if(a[i]==-1){
              x_1++;
        }
        else{
         x1++;
        }
    }

    if(x_1%2){
        if(!x2){
            putting +=2;
        }
    }

    cout<<putting;

    return 0;
}

