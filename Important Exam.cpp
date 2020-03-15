
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


    int a[1005][6]={0};
int main()
{


int x;

       int n,m;

        int sum=0;
       cin>>n>>m;


       string s;
         int i,j;

       for(i=0;i<n;i++)
            {
            cin>>s;
            for(j=0;j<m;j++){
                a[j+1][s[j]-'A'+1]++;
                a[j+1][0]=max(a[j+1][0],a[j+1][s[j]-'A'+1]);}
            }



        for(i=1;i<=m;i++){
            cin>>x;
            sum+=a[i][0]*x;
        }




        cout<<sum;
 }
