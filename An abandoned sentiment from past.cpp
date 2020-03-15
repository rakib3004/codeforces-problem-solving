
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


     int   n,k,t;

     cin  >>n>>k;


       int  a[n],b[k];


       int i;

       for(i=0;i<n;i++)
       {

         cin  >>a[i];


       }

       for(i=0;i<k;i++)
       {

           cin >>b[i];
       }

      if(k>1)
      {
         printf("Yes");

         return 0;

      }

      else
      {


            t=b[0];


            for(i=0;i<n;i++)
            {


              if(a[i]==0)

              {

                a[i]=t;
              }


            }
            for(i=1;i<n;i++)
            {


            if(a[i-1]<a[i])
            {

                continue;
            }

            else
            {

                printf("Yes");

                return 0;
            }




            }

      }

           printf("No");

           return 0;
}

