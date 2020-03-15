
#include<iostream>
#include<stdio.h>
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

      for(i=0;i<n;i++)
      {

          cin  >>a[i];
      }

 if(n==2)
 {

     printf("0");
     return 0;
 }


 sort(a,a+n) ;

 int s1=a[1]-a[0],s2=a[n-1]-a[n-2];


     if(s1>s2)
     {

         cout <<a[n-1]-a[1];
         return 0;
     }

     else
     {

        cout <<a[n-2]-a[0];
     }
           return 0;
}

