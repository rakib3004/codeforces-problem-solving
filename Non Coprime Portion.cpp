
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




int n;

cin>>n;


     int i;


    if(n<3)
    {


        cout<<"No";

    }
    else
    {

        cout<<"Yes"<<endl;

        cout<<1<<" "<<n<<endl;

   cout<<n-1<<" ";

        for(i=1;i<n;i++)
        {

          cout<<i<<" ";
        }

    }

    return 0;
    }




