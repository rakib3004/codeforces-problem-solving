
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


   int i,odd=0,even=0;

   int a[n];

   for(i=0;i<n;i++)
   {


       cin  >>a[i];

       if(a[i]%2)
       {

           odd++;
       }

       else{even++;}

   }

   sort(a,a+n);

   int sum =0;
   int  p1=0,p2=0,d=0;

   if(even==odd||abs(even-odd)==1)
   {

      printf("%d",sum);
      return 0;

   }

   else if(even>odd)
   {

       p2=(even-odd)-1;
   }

   else if (odd>even)
   {

       p1=(odd-even)-1;
   }

   if(p1)
   {

       for(i=0;i<n;i++)
       {


           if(a[i]%2==1)
           {

               sum+=a[i];
               d++;

               if(d==p1)
               {

                   break;
               }
           }
       }
   }
if(p2)
   {

       for(i=0;i<n;i++)
       {

           if(a[i]%2==0)
           {

               sum+=a[i];
               d++;

               if(d==p2)
               {

                   break;
               }
           }
       }
   }

   cout << sum;

           return 0;
}

