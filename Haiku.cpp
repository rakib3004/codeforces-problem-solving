
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cstdio>
#include<cmath>
#include<stdlib.h>
#include<math.h>
#define  o unsigned long long int
using namespace std;

int main()

{

     int i,p,q,r;

    char  a[1000],b[1000],c[1000];

    fgets(a,1000,stdin);

     fgets(b,1000,stdin);

          fgets(c,1000,stdin);


          p=strlen(a);
          q=strlen(b);
          r=strlen(c);

         int x=0,y=0,z=0;

     for(i=0;i<p;i++)
     {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {

         x++;

        }

     }


  for(i=0;i<q;i++)
     {
        if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
        {

         y++;

        }

     }


   for(i=0;i<r;i++)
     {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
        {

         z++;

        }

     }

   if(x==5&&y==7&&z==5)
   {

       cout<<"YES";
   }

   else
   {



       cout<<"NO";
   }


 return 0;



}



