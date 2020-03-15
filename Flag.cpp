
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()

{

      int n,m;

      cin >>n>>m;

      string  a[n];

      int i,j;


      for(i=0;i<n;i++)
      {

          cin>>a[i];
      }


      for(i=0;i<n-1;i++)
      {



              if(a[i]==a[i+1])
              {

                  cout << "NO";
                  return 0;
              }

      }

      for(i=0;i<n;i++)
      {

          for(j=1;j<m;j++)
          {

              if(a[i][j]!=a[i][j-1])
              {

               cout << "NO";
                  return 0;
              }
          }
      }


          printf("YES");
          return 0;
}
