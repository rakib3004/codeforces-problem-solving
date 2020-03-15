
#include<iostream>
#include<string>
#include<algorithm>

#include<stdio.h>
#include<string.h>
using namespace std;
int main()

{

    int k4=0,k2=0,k[3]={0};


    cin>>k[0]>>k4>>k[1]>>k[2];
k2=k[0];
    sort(k,k+3);

    int sum=0;

    sum+=k[0]*256;

       k2=k2-k[0];

       int p=std::min(k4,k2);

       sum+=p*32;


       cout <<sum;



return 0;

}
