

#include<stdio.h>
#include<string>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>
#define   o long long int

using namespace std;

int main()
{


         int n,c;
            cin>>n>>c;




         int a[n]={0};
              int i;



              for(i=0;i<n;i++)
              {
                cin>>a[i];
              }
             int x=1;

         for(i=1;i<n;i++)
         {

           if(a[i]-a[i-1]<=c)
           {

               x++;
           }

           else
           {

               x=1;
           }
         }
      cout<<x;

return 0;

 }
