
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


   o  n,f;



      cin>>n>>f;

         if(f==1)

            {

    cout<<1;


    return 0;

                }



            o i,j;

                    o count=0 ;
                for(i=2;i<=n;i++)
                {
                if(f%i==0)
                {

                    if((f/i)<=n)

                    count++;



                }

                }

                if(f<=n)
                {

                    count++;
                }






  cout<<count;

              return 0;

}
