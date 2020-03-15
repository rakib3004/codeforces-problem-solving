
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<cmath>
#include<string>
#define   o  unsigned long long int
using namespace std;

int main()

{



       int n,i,sum=0,count=0;
         cin  >>n;


        string a;


        cin  >>a;


        for(i=0;i<n;i++)
        {

        if(a[i]!='4'&&a[i]!='7')

        {
            printf("NO");

            return 0;
        }

        }

        for(i=0;i<n/2;i++)
        {

            sum+=a[i]-'0';
        }

        for(i=n/2;i<n;i++)
        {

            count+=a[i]-'0';
        }


        if(sum==count)
        {

            printf("YES");
            return 0;
        }


        printf("NO");



           return 0;
}

