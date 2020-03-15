
#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#define o   long long int
using namespace std;

int main()
            {

     int n;
	cin>>n;
	int a[n];


int	i,d1,d2,j;



	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}


	for(i=0,j=n-1;i<n;)
	{
		if(a[i]!=a[j])
		{
			d1=j-i;
			break;
		}
		else
		{
			j--;
		}
	}



	for(i=0;i<n;i++)
	{
		if(a[i]!=a[n-1])
		{
			d2=n-i-1;
			break;
		}
	}

	if(d1>=d2)
	{




		cout<<d1
		;



	}



	else
	{



	cout<<d2;




	}


    return 0;

}
