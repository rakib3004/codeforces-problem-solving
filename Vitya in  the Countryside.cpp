
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


         int n;



         cin>>n;


         int i;

            int a[n];

         for(i=0;i<n;i++)
         {


             cin>>a[i];
         }



          if(a[n-1]==15)

         {

                   cout<<"DOWN";


                      }


                      else if(a[n-1]==0)
                      {


                          cout<<"UP";
                      }
  else   if(n==1)

         {
             cout<<-1;

         }


                      else if(a[n-1]<a[n-2])


                      {

                         cout<<"DOWN";

                      }


                      else  if(a[n-1]>a[n-2])

                      {
                          cout<<"UP";

                      }



              return 0;

}
