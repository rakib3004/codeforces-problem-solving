
#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#define o   long long int
#define z 3.14159265358979323846264338327950
using namespace std;


int main()
            {




       int n,k;


       cin>>n>>k;

       if(k>=n)
       {

                 cout<<-1;

                 return 0;


       }
       int t,s=n;
       int f[k]={0};

           int g[5]={2,3,5,7,11};

                int m=0;
       int i=0;
            int j=0;
                 int l=2;
       for(i=0;i<k-1;i++)
       {
            for(t=l;t<=sqrt(s); )
            {

                if(n%t)
                {

                    l++;

                     t++;
                        continue;
                }
                else if(n%t==0)
                {

                   f[j]=t;
                   j++;
                   n=n/t;
                   break;

                }
            }



              if(n<2)
             {

                 cout<<-1;

                 return 0;

             }




       }

           f[k-1]=n;

       for(i=0;i<k;i++)
       {
          if(f[i]==0)
          {

              cout<<-1;
              return 0;
          }

       }
        for(i=0;i<k;i++)
       {
          cout<<f[i]<<" ";

       }
    return 0;

}


