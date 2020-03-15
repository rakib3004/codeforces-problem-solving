
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<stdlib.h>
#include<cmath>
#include<cstdio>
#include<map>
#include<string>
#include<string.h>
#define   o   long long int
#define x  int i,n,k;cin >>n>>k;  int a[n];for(i=0;i<n;i++){cin>>a[i];}


using namespace std;

int main()

{
  int n,k;

      cin >>n>>k ;

      if(n==1&&k==10)

      {

          cout<<-1;
          return 0;
      }

     char a[107]={};

   int i;



        if(k==10)
        {

           a[0]='1';
           a[1]='0';

          for(i=2;i<n;i++)
          {

              a[i]='0';
          }

        }


        else
        {

        a[0]=k+'0';

           for(i=1;i<n;i++)
           {

               a[i]='0';
           }



        }



 cout<<a;






              return 0;

}
