
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<string>

using namespace std;

int main()

{



string a,b;
     cin >>a>>b;

     int a1,b1,a2,b2;


     a1=a.size();


     b1=b.size();

     a2=a1;

     b2=b1;



     int i,j;

     for(i=a1-1,j=b1-1;i>=0,j>=0;i--,j--)
     {

         if(a[i]==b[j])
         {
            a2--;
            b2--;

         }
         else
         {
             break;
         }

     }


     cout  << a2+b2;


           return 0;
}

