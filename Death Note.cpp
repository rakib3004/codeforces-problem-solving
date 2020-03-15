
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

    o n,m;

    cin>>n>>m;



    o a[n+1]={0},b[n+1]={0};

    o i;
    o g=0,h=0;

         o sum=0;

    for(i=1;i<=n;i++)
    {


        cin>>a[i];
       g=sum/m;


    sum+=a[i];

     h=sum/m;

      b[i]=h-g;

    }


    for(i=1;i<=n;i++)
    {

    cout<<b[i]<<" ";
    }




        return 0;

 }
