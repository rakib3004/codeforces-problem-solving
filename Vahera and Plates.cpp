
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

      int  n,m,k;

      cin  >>n>>m>>k;



      int  a[n];


      int i,count1=0,count2=0,count=0;

      for(i=0;i<n;i++)
      {

         cin  >>a[i];
         if(a[i]==1)
         {

             count1++;
         }

         else
         {


             count2++;
         }

      }

      int p,q;



      p=count1-m;

      if(p>=0)
      {


          count+=p;
      }

      else
      {



          q=m-count1;

          k+=q;
      }

      q=count2-k;


      if(q>=0)
      {


          count+=q;
      }

      cout<<count;
      return 0;







           return 0;
}

