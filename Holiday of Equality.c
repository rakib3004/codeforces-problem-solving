#include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
int main()
{

	int max=0,nr=0,count=0,i,n;
	scanf("%d",&n);
    int a[1000];

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		}


		for(i=0;i<n;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
			}

			}

				for(i=0;i<n;i++)

			{
			    nr=max-a[i];
				count=count+ nr;
				}

				printf("%d",count);

				return 0;

				}


