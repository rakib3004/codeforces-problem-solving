
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




      int n;

      cin>>n;


        string a[n];

         int i,j,k;

           int HAPPINESS=0;

         for(i=0;i<n;i++)
         {



             cin>>a[i];



         }


         for(i=0;i<n;i++)
         {
           k=0;

         for(j=0;j<n;j++)
         {
            if(a[i][j]=='C')
            {
             k++;

            }

           }

           k--;

           k=(k*(k+1))/2;
           HAPPINESS= HAPPINESS+k;

           }
for(i=0;i<n;i++)
         {
           k=0;

         for(j=0;j<n;j++)
         {
            if(a[j][i]=='C')
            {
             k++;

            }

           }

           k--;

           k=(k*(k+1))/2;
           HAPPINESS= HAPPINESS+k;

           }




           cout<<HAPPINESS;
        return 0;

}
