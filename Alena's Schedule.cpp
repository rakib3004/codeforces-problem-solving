
#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#define o long long int
using namespace std;

int main()
            {


             int n;


             int i;


             cin>>n;


             int a[n+1]={0};


             for(i=0;i<n;i++)
             {
                cin>>a[i];
             }

               int c=0,f=0;

             for(i=0;i<n;i++)
             {
                if(a[i]==0&&f==1)
                {

                 if(a[i+1]==0||a[i-1]==0)
                 {
                      continue;

                 }

                 else
                 {
                     c++;
                 }



                }

                 else if(f==1&&a[i]==1)
                 {


                     c++;
                 }


                else if(f==0&&a[i]==1)
                {

                    f=1;
                    c++;
                }

                else if(f==0&&a[i]==0)
                {

                    f=0;
                }



             }



           cout<<c;





    return 0;

}
