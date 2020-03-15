
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<cmath>
#include<string>
#define   o  unsigned long long int
using namespace std;

int main()

{

        int n,max=0,np;


        cin  >>n;



        string b;


        cin  >>b;


           int a[n];
         int i;

         for(i=0;i<n;i++)
         {

             cin >>a[i];
         }



          for(i=0;i<n;i++)
         {

             if(b[i]=='R'&&b[i+1]=='L')

             {

               max=(a[i+1]-a[i])/2;
               np=i;
                 break;

             }


         }

         if(max==0)
         {

             cout  << -1;
             return 0;
         }

         for(i=np+1;i<n;i++)
         {

            if((b[i]=='R'&&b[i+1]=='L')&&(((a[i+1]-a[i])/2)<max) )
            {

                max=(a[i+1]-a[i])/2;
            }


         }


         cout  << max;



           return 0;
}

