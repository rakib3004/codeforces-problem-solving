
#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()

{

  long long   int a,b,ab,c;

     cin >>a>>b>>ab;



     if(a>b)

     {


         c=a-b;
         if(c>1)
         {

             a=b+1;
         }

     }

   else  if(b>a)

     {


         c=b-a;
         if(c>1)
         {

             b=a+1;
         }

     }



     ab=ab*2;

     c=ab+a+b;




      cout  << c;



return 0;

}
