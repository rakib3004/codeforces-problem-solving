
#include <stdio.h>
int main()
{

	int n;
	scanf("%d",&n);

	int i,j;
	int sum=n;

	for(i=0,j=n;i<=n,j>=0;i++,j--)
	{
		sum+=(i*j);
	}

		printf("%d",sum);

		return 0;

		}
