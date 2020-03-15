
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string>
#include <numeric>

using namespace std;

int main()

{
   int n;

   cin  >>n;

   int a[n];

   int i;
   int d[3];

   for(i=0;i<n;i++)
   {

       cin >>a[i];

   }

   int min,max;

   for(i=0;i<n;i++)
   {

       if(a[i]==1)
       {

           min=i+1;
       }

       if(a[i]==n)

       {
           max=i+1;
       }
   }


    d[0]=abs(max-min) ;

    if(max>min)

    {
        d[1]=max-1;
        d[2]=n-min;

    }

    else
    {

        d[1]=min-1;
        d[2]=n-max;
    }
   sort(d,d+3);

      cout << d[2];

           return 0;
}

