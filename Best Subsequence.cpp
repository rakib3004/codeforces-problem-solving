
#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#define o long long int
using namespace std;

int main()
            {



        o n;

         cin>>n;



        o i;



         o a[n],max1=0,count=0,flag=0;



         for(i=0;i<n;i++)
         {


          cin>>a[i];




          max1=max(max1,a[i]);

         }

         for(i=0;i<n;i++)
         {



             if(a[i]==max1)
             {

                flag++;
             }

             else
             {

                count=max(count,flag);

                flag =0;

             }

         }



        count=max(count,flag);
         cout<<count;





    return 0;

}
