
#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()

{

   int n,k;

   cin  >>n>>k;


   int y=240;

   y=y-k;


   int i,s=0;

     for(i=1;i<=n;i++)
     {

      s+=5*i;

      if(s>y)
      {

        i--;

        printf("%d",i);

      return 0;

      }


     }


     printf("%d",n);





return 0;

}

