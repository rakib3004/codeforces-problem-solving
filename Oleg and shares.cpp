
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cmath>
#include<stdlib.h>
#include<math.h>
#define  o  long long int
using namespace std;

int main()

{


          o n,k;

          cin>>n>>k;

      o a[n];


      o i;

      for(i=0;i<n;i++)

      {



          cin>>a[i];
      }


          sort(a,a+n);

         o d[n]={0};

              o sum=0;
          for(i=1;i<n;i++)
          {


              d[i]=a[i]-a[0];


              if(d[i]%k==0)
              {

                  d[i]=d[i]/k;
                 sum+=d[i];
              }

              else
              {

                  cout<<-1;
                  return 0;
              }


          }


         cout<<sum;

    return 0;
}



