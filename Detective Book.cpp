
#include<bits/stdc++.h>
#define o long long int
using namespace std ;
int main()
{




       int n;


       cin>>n;


       int a[n];


       int i;

       for(i=0;i<n;i++){

        cin>>a[i];

       }

       int  mind_creaker=0,max1=0;
       for(i=0;i<n;i++ ){
               max1=max(max1,a[i]);
             if(i+1==max1){
              mind_creaker++;
             }

       }


  cout<< mind_creaker;

  return 0;
       }



