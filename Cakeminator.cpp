
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




      int n,m;


      cin>>n>>m;



    string a[n];


      int i,j,k;



      for(i=0;i<n;i++)
      {



             cin>>a[i];


      }

         int f=0;
      int total_point=0;
      int level_point=0;

       for(i=0;i<n;i++)
      {

         f=0;

          for(j=0;j<m;j++)
          {
           if(a[i][j]=='S')
           {
              f=1;
              break;
           }


          }

          if(f==0)
          {
           for(j=0;j<m;j++)
          {
           a[i][j]='X';

          }

          }

      }





        for(i=0;i<m;i++)
      {

         f=0;

          for(j=0;j<n;j++)
          {
           if(a[j][i]=='S')
           {
              f=1;
              break;
           }


          }

          if(f==0)
          {
           for(j=0;j<n;j++)
          {
           a[j][i]='X';

          }

          }

      }



      for(i=0;i<n;i++)
      {



          for(j=0;j<m;j++)
          {

             if(a[i][j]=='X')
             {

                total_point++;
             }
          }

      }


       cout<<total_point;

   return 0;
}
