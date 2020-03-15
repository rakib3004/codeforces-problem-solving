
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


        string a;


             cin>>a;

              int x=n/11;

              int y=0;


              int i;

              for(i=0;i<n;i++)
              {
               if(a[i]=='8')
               {

                   y++;
               }

              }

              cout<<min(x,y);
        return 0;

}
