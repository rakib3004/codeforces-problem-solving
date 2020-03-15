
#include<stdio.h>

 #include<iostream>
#include<stdlib.h>
#include<cmath>
#include<algorithm>
#define o long long int

using namespace std;


using namespace std;


int main()
{
	string a,b,c;


	cin>>a>>b>>c;

	      int i,j;

	      char test;


	for(i=0;i<c.size();i++)
	{
		 test=c[i];


		for(j=0;j<a.size();j++)

		{
			if(test>='a' && test<='z')

			{
				if(test==a[j])

				{
					test=b[j];

					break;
				}

			}
			if(test>='A' && test<='Z')

			{
				if(test==toupper(a[j]))

				{
					test=toupper(b[j]);

					break;

				}
			}

		}

		c[i]=test;

	}
	cout<<c<<endl;
	return 0;
}
