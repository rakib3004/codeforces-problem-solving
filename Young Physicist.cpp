
#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){


     int n;

     cin  >>n;

     int x[n],y[n],z[n];
      int sumx=0,sumy=0,sumz=0;
     int i;

     for(i=0;i<n;i++)
     {
       cin>>x[i]>>y[i]>>z[i];
         sumx+=x[i];
         sumy+=y[i];
         sumz+=z[i];

     }

     if(sumx==0&&sumy==0&&sumz==0)
     {


         printf("YES");
     }

     else
     {



         printf("NO");
     }



return 0;

}
