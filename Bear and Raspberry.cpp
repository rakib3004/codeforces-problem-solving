
#include<stdio.h>
#include<string>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{




int n,c;


cin>>n>>c;



int a[n];


int i;


for(i=0;i<n;i++)
{



    cin>>a[i];
}


int d,max1=0;



for(i=1;i<n;i++)
{

    d=a[i-1]-a[i];

    if(d>max1)
    {

        max1=d;
    }



}


if(max1-c<0)
{

    cout<<0;
    return 0;
}


  cout<<max1-c;




return 0;

}






