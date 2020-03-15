
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
#include <numeric>

using namespace std;

int main()

{

 int n,b,d;

 cin >>n>>b>>d;


 int sum=0,count=0;

 int a[n];


 int i;


 for(i=0;i<n;i++)
 {


     cin >>a[i];

     if(a[i]>b)
     {

         continue;
     }

     else
     {

         sum+=a[i];

         if(sum>d)
         {

             sum=0;
             count++;
         }



     }

 }

     cout << count;
           return 0;
}

