
#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){


     int i,n;

     cin  >>n;

     int a[n];
           int count=1,max=0;

           for(i=0;i<n;i++)
           {


               cin  >> a[i];
           }
   for(i=0;i<n-1;i++)
   {
      if(a[i]<=a[i+1])
      {

          count++;
      }
      else
      {

         if(count>max)
         {

             max=count;
             count=1;
         }
         else
         {


             count=1;
         }


      }


   }

   if(count>max)
         {

             max=count;
             ;
         }

   cout  << max;
return 0;

}
