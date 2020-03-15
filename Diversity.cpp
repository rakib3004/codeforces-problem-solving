
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<cmath>
#include<string>
#define   o   long long int
//#define x int i,n;cin >>n;int a[n];for(i=0;i<n;i++){cin>>a[i];}


using namespace std;

int main()

{
       string  a;
            int i,j,n=0,k,f;
            int w[256]={0};
       cin >>a>>k;



       f=a.size();

       for(i=0;i<f;i++)
       {
       w[a[i]]++;

       }


       for(j=97;j<=122;j++)
       {

           if(w[j])
           {

               n++;
           }
       }
          if(k>f)

          {

              cout<<"impossible";
                    return 0;
          }

          if(n>=k)
          {

              cout<<0;
              return 0;
          }

          else
            {

             cout<<k-n;

            }


         return 0;
     }


