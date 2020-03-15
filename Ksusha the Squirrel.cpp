
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


          int i,j=0;


          string a;



          cin>>a;


          for(i=1;i<n-1;i++)
          {



              if(a[i]=='.')
              {
                     j=0;
                  continue;
              }


              else{

                 j++;

                 if(j<k)
                 {

                     continue;
                 }

                 else
                 {

                     cout<<"NO";

                     return 0;
                 }

              }

          }




    cout<<"YES";


       return 0;

     }
