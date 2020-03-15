
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





o a,b,i;


cin>>a>>b;

o y=a;


for(i=0; ;i++)
{



    if(a==b)
    {

        cout<<"YES"<<endl;
        cout<<i;
        return 0;
    }

    else if(a>b)
    {

        cout<<"NO";
        return 0;
    }

    else
    {

        a*=y;


    }
}



return 0;

}
