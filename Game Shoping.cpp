
#include<stdio.h>
#include<string>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<algorithm>
#define o long long int

using namespace std;

int main()
{




      int n,m;

      cin>>n>>m;


         int c[n],a[m];

         int i,j;
              int k=0;

         for(i=0;i<n;i++)
         {

         cin>>c[i];

         }

         for(j=0;j<m;j++)
         {

             cin>>a[j];

         }

                 int counter=0;

         for(i=0;i<n;i++)
         {

         for(j=k;j<m;j++)
         {
           if(a[j]>=c[i])
           {

               k++;
               counter++;
               break;
           }

           else{

                break;
           }


         }


         }



         cout<<counter;
        return 0;



}
