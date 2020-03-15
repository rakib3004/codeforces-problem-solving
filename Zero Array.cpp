
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



     o x=0;
     o mainStream=0;
     o opp=0;


    o i;


    for(i=0;i<n;i++)


    {
     cin>>x;

mainStream+=x;


opp=max(x,opp);

    }

    if((mainStream%2==1)||opp>(mainStream-opp))
    {

        cout<<"NO";
    }


    else
    {

        cout<<"YES";
    }

    return 0;
}
