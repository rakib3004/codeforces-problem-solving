
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string>
#include <numeric>

using namespace std;

int main()

{

       int t,s,x;


       cin >>t>>s>>x;

       int i;


           if(x<t)
           {

               printf("NO");
               return 0;
           }

           if(x==t)
           {

               printf("YES");
               return 0;
           }

           for(i=0;t<x;i++)
           {

               t+=s;

               if(x<t)
               {

                   printf("NO");
                   return 0;
               }

               if(x==t||x==t+1)

               {
                   printf("YES");
                   return 0;
               }
           }




           return 0;
}

