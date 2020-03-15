
#include<stdio.h>
#include<string>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<algorithm>
#define o long long int
using namespace std;

int main()
{




int k;

string a;


cin>>a>>k;


int i;
int count1=0,count2=0;

int h=a.size();
for(i=h-1;i>=0;i--)
{



    if(a[i]!='0')

    {


        count2++;

    }
    else
    {


       count1++;

    }

    if(count1==k)
    {

        cout<<count2;
        return 0;
    }
}


   cout<<h-1;
   return 0;
}
