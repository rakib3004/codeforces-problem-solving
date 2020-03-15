
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<stdlib.h>
#include<cmath>
#include<cstdio>
#include<map>
#include<string>
#include<string.h>
#define   o   long long int
#define x  int i,n,k;cin >>n>>k;  int a[n];for(i=0;i<n;i++){cin>>a[i];}


using namespace std;

int main()

{

     int t=29;
int a[3],b[3];
       int i;

cin>>a[0]>>a[1]>>a[2];

   for(i=0;i<3;i++)
   {

       b[i]=a[i];
   }

             int f=0;
   sort(b,b+3);

   for(i=2;i>=0;i--)

   {
       if(a[i]==b[2])

       {



        f=i;

         break;

       }
   }

   int u=b[0]/2;

   u++;

   int j;


   for(j=0;j<101;j++)
   {

       for(i=0;i<3;i++)
       {

           a[i]-=2;
           t++;
        if(a[f]<1)
        {

            cout<<t;
            return 0;
        }
       }
   }



       return 0;

     }
