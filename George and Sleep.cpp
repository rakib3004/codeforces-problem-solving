#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<cmath>
#include<string>
#define   o  unsigned long long int
using namespace std;

int main()

{
       string a,b;

       cin>>a>>b;

       int a1,a2,a3,b1,b2,b3,c1,c2,c3;

       a1=(a[0]-'0')*10+(a[1]-'0');
       a2=(a[3]-'0')*10+(a[4]-'0');
       a3=(a1*60+a2)*60;

     b1=(b[0]-'0')*10+(b[1]-'0');
       b2=(b[3]-'0')*10+(b[4]-'0');
     b3=(b1*60+b2)*60;

     c3=a3-b3;

     if(c3<0)
     {

         c3=(86400+c3);
     }

     c1=c3/3600;
     c2=c3%3600;
     c2=c2/60;

     if(c1<10)
     {

         printf("0%d:",c1);
     }
     else
     {

       printf("%d:",c1);

     }

     if(c2<10)
     {

        printf("0%d",c2);
     }
     else
     {
        printf("%d",c2);

     }

           return 0;
}

