#include <stdio.h>
int main()
{
	int n,i,j;



	int a[1000];
	int b[1000];
 scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
scanf("%d",&a[i]);
b[a[i]]=i;
	}

	for(i=1;i<=n;i++)
	{
		printf("%d ",b[i]);

}
return 0;
}
