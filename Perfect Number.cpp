
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdio>





using namespace std;

int main()
{



   int n;

cin>>n;
   int p=19;
   int i,j,l,k;
   int c;
   for(i=2;i<=n;i++)

   {
      p=p+9;

     c=p;
     l=0;
     while(c!=0)
       {
         j=c%10;
          l=l+j;
          c=c/10;


       }

       if(l!=10)

       {
           i--;
       }


   }


   cout<<p;



   return 0;
}
