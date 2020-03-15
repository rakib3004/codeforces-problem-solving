

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


           int n;
              int i ;

           cin>>n;

           int a[n];

              int u=0,v=0;

           for(i=0;i<n;i++)
           {

               cin>>a[i];

               if(a[i]==1)

               {


                   u=i+1;
               }

               else{v=i+1;}


           }




           cout<<min(u,v);
        return 0;

 }
