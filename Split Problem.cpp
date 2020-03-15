
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cstdio>
#include<map>
#include<cmath>
#include<stdlib.h>
#include<math.h>
#define  o unsigned long long int
using namespace std;

int main()

{


  int n;


  cin>>n;


    int a[n],b[n],c[n];


    int i;


    for(i=0;i<n;i++)
    {

        cin>>a[i]>>b[i];
        c[i]=a[i]+b[i];

    }

    int j;


    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {


            if(a[i]==c[j]&&a[j]==c[i])


                {



    printf("YES");
    return 0;
                    }
        }

    }




     printf("NO");




 return 0;



}



