

#include<stdio.h>
#include<string>
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


         int n;
            cin>>n;




         int a[n]={0};
              int i;

                 int sum=0,y=0;

              for(i=0;i<n;i++)
              {

                  cin>>a[i];



                    if(sum==0&&a[i]==-1)
                    {

                        y++;
                    }



                    else
                    {
                     sum+=a[i];

                    }
              }


              cout<<y;

        return 0;

 }
