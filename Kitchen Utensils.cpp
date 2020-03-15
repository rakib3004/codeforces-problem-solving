#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#define o  unsigned  long long int
using namespace std;


int main()
            {




            int n,k;


            cin>>n>>k;


            int a[n+1];

            int i;

            for(i=0;i<n;i++)
            {

                cin>>a[i];

            }




                   int p[101]={0};
            for(i=0;i<n;i++)
            {

              p[a[i]]++;
            }
              a[n]=0;

                     int count=0;
            sort(a,a+(n+1));

            for(i=0;i<n;i++)
            {
             if(a[i]!=a[i+1])
             {

                 count++;
             }

            }

            sort(p+1,p+101);

                  int y;
                  y=p[100]/k;

         if(p[100]%k)
         {

             y++;

             k=k*y;
         }

         else
         {

             k=k*y;
         }


         int h=k*count;


      cout<<h-n;





    return 0;

}



