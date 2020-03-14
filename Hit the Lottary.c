#include <stdio.h>

int main()

{

	int i;
	int n;
	int r=0;
	int count=0;
	scanf("%d",&n);
	int a[5]={100,20,10,5,1};

	for(i=0;i<5;i++)
	{
	r=n/a[i];
		count= count+r;
		n=n%a[i];
		}

		printf("%d",count);


		return 0;

		}
