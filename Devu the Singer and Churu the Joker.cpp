
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


             cin>>n>>k;


             int a[n];

             int i;

             int j=0;
             int sum=0;

             for(i=0;i<n;i++)
             {

              cin>>a[i];
              sum+=a[i];

             }




             int f=k-sum,p;

             if(f>=0)
             {


             p=f/5;

               if(p<((n-1)*2))
               {

                   cout<<-1;

                   return 0;
               }

               cout<<p;
               return 0;
             }

             else
             {

                 cout<<-1;
             }


              return 0;

}
