
#include<stdio.h>
#include<string>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<algorithm>
#define o long long int

using namespace std;

int main()
{


     int n;

     cin>>n;

string s;


cin>>s;


   int i;

   int a=0,b=0,initialization=0;
   for(i=0;i<n;i++)
   {
      if(s[i]=='+')
      {

         a++;

      }

      if(s[i]=='-')
      {

          if(a==0)
          {

              initialization++;
          }

          else
        {
           a--;


          }
      }

   }

  for(i=0;i<n;i++)
  {
     if(s[i]=='+')
     {

       initialization++;
     }
     else{

        initialization--;

     }



  }




     cout<<initialization;
        return 0;

}
