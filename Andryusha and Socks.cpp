
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

    o n;

    cin>>n;



    o a[2*n]={0},b[n+1]={0};

    o i;
    o g=0,h=0;

         o sum=0;

    for(i=1;i<=n*2;i++)
    {


        cin>>a[i];



      b[a[i]] ++;
      if(b[a[i]]==2)
      {

        g=max(g,sum);

        sum--;
      }

      else
      {
        sum++;

      }

    }


cout<<g;


        return 0;

 }
