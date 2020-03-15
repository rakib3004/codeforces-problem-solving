
#include <iostream>
#include<algorithm>


 using namespace std;

int main()

{

	int i;
	int n;
	int r=0;
	int co=0;
	cin>>n;


	int a[5]={100,20,10,5,1};

	for(i=0;i<5;i++)
	{
	r=n/a[i];
		co= co+r;
		n=n%a[i];
		}


	cout<<co;

		return 0;

		}
