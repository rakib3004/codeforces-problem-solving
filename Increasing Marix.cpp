
#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n,m;
   cin>>n>>m;
   int i,j;
   int a[n][m];
   for(i=0;i<n;i++)
   {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
   }
   for(i=n-2;i>=0;i--)
   {
       for(j=m-2;j>=0;j--)
       {
           if(!a[i][j])
           {
               a[i][j]=min(a[i+1][j],a[i][j+1])-1;
           }
       }
   }

   int summation=0;
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           if((i<n-1&&a[i][j]>=a[i+1][j])||(j<m-1&&a[i][j]>=a[i][j+1]))
           {
               cout<<-1;
               return 0;
           }
           summation+=a[i][j];
       }

   }
   cout<<summation;
}

