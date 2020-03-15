

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

using namespace std;

int main()
{

  int n,k;



  cin>>n>>k;


  int a[n];

  int i;

      int g=n;





  for(i=0;i<n;i++)
  {

     cin>>a[i];

  }


    int j;

          int p=1129;
    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {

         if(a[i]==a[j]&&a[j]!=1129)
         {

             a[j]=p;

              g--;
         }

        }
    }
               j=0;

           if(g<k)
           {
               printf("NO");

           }
        else
        {

            printf("YES\n");
            for(i=0;j<k;i++)
            {

                if(a[i]!=1129)
                {

                    cout<<i+1<<" ";
                    j++;
                }

            }
        }

         return 0;



}








