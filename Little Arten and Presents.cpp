
#include<stdio.h>
#include<string>
#include<cstdio>
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

       if(n%3==0)
       {

           cout<<2*(n/3);
       }
       else
       {

         cout<<(2*(n/3))+1;

       }


}
