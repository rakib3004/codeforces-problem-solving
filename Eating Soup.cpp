
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
int n,m;



        cin>>n>>m;

    if(m==1)
   {

       printf("1");


       return 0;
   }


   if(m==0)
   {

       printf("1");


       return 0;
   }


  if(n%2==0)
  {


      if(m<=(n/2))
      {

          cout  <<m;
      }

      else{


        cout  <<n-m;
      }

  }

  else
  {
      if(m<=(n/2))
      {

          cout  <<m;
      }

      else if(m==((n/2)+1))
      {

          cout  <<n/2;
      }
      else
      {

        cout  <<n-m;


      }



  }






           return 0;
}

