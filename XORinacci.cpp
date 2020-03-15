

#include<stdio.h>
#include<string>
#include<string.h>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>
#define   o long long int
int    a,b,c;
int y=0;

using namespace std;

   int fb(int , int , int);

int  main()
{



    int n;


    cin>>n;





    int i;


    for(i=1;i<=n;i++)
    {
          cin>>a>>b>>c;

          y=fb(a,b,c);

          cout<<y<<endl;


    }





}


    int fb(int a , int b ,int c)
    {

      if(c%3==0)

      {
          return a;
      }
      else if(c%3==1)
      {

          return b;

      }

       else
       {

          return a ^ b;
       }

    }



