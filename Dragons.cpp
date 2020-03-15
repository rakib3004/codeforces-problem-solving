 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;

 int main()
{


int i,j;

int s,n;

scanf("%d%d",&s,&n);

int x[n],y[n];

for(i=0;i<n;i++)
{


    scanf("%d%d",&x[i],&y[i]);
}

int t1,t2;

for(i=0;i<n;i++)
{

    for(j=i+1;j<n;j++)
    {

        if(x[j]<x[i])
        {

            t1=x[i];
            x[i]=x[j];
            x[j]=t1;

            t2=y[i];
            y[i]=y[j];
            y[j]=t2;

        }
    }
}

for(i=0;i<n;i++)
{


    if(s<=x[i])
    {

        printf("NO");
        return 0;
    }
    else{


        s+=y[i];

    }

}

     printf("YES");
   return 0;

}

