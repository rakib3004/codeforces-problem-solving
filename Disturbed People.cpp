
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string>
#include <numeric>

using namespace std;

int main()

{


        int n;

         cin >>n;

            int a[n];

            int i,count=0;

            for(i=0;i<n;i++)
            {

                cin >>a[i];

            }

            for(i=1;i<n-1;i++)

            {

                if(a[i]==0&&a[i-1]==1&&a[i+1]==1)

                {

                    count++;

                    i+=2;

                }

            }

            printf("%d",count);



           return 0;
}

