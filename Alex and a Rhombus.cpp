
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

        int No_Cells=1;

        for(i=2;i<=n;i++)
        {

           No_Cells=No_Cells+(4*(i-1));
        }



        cout<<No_Cells;


    return 0;
    }


