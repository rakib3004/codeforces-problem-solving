
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<cmath>
#include<string>
#define   o  unsigned long longint
using namespace std;

int main()

{


 string  a;


 cin  >>a;


 int i,n,m=0;

  n=a.size();

 for(i=0;i<n;i++)
 {

   if((a[i]=='A')&&(a[i+1]=='B'||a[i+1]=='C'))
   {
      if(a[i+1]=='B'&&a[i+2]=='C')
      {

         printf("Yes");
         return 0;
      }

      else  if(a[i+1]=='C'&&a[i+2]=='B')
      {

        printf("Yes");
          return 0;

      }



   }

      else if((a[i]=='B')&&(a[i+1]=='A'||a[i+1]=='C'))
   {
      if(a[i+1]=='A'&&a[i+2]=='C')
      {

         printf("Yes");
         return 0;
      }

      else  if(a[i+1]=='C'&&a[i+2]=='A')
      {

        printf("Yes");
          return 0;

      }


   }

     else   if((a[i]=='C')&&(a[i+1]=='B'||a[i+1]=='A'))
   {
      if(a[i+1]=='B'&&a[i+2]=='A')
      {

         printf("Yes");
         return 0;
      }

      else  if(a[i+1]=='A'&&a[i+2]=='B')
      {

        printf("Yes");
         return 0;

      }

   }

   else
   {

       continue;
   }




 }


 printf("No");

           return 0;
}

